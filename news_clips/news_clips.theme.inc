<?php 
/**
 * @file news_clips.theme.inc
 */

/**
 * Implements hook_preprocess_node().
 */
function news_clips_preprocess_node(&$vars) {
  $node = $vars['node'];
  if ($node->type == 'news_clip') {
    // Get get variables from related news organization.
    foreach ($node->field_news_org as $array) {
       $nid = $array[0]['nid'];
       $org_node = node_load($nid);
    }
    $vars['organization_type'] = _news_clips_org_type($org_node);
  }
  else if ($node->type == 'news_organization') {
    $vars['banner'] = _news_clips_banner($node);
  }
  /*
    // FOOTER
    $variables['footer'] = check_markup(variable_get('news_clips_footer', NULL));

      // TODO Use Render API #attached here to attach CSS?
      if (isset($vars['type']) && $vars['type'] === 'news_clip') {
        drupal_add_css(drupal_get_path('module', 'news_clip') . '/theme/news_clips.css');
      }
// */
}

/**
 * Implements hook_preprocess_field().
 */
function news_clips_preprocess_field(&$variables) {
  // Add "By" in front of author's name in news clip byline.
  if ($variables['element']['#field_name'] == 'field_news_by') {
    $author = $variables['items'][0]['#markup']; 
    $variables['items'][0]['#markup'] = t('By') . ' ' . $author;
  }
  // Add http:// for link to external website, if user didn't include this.
  else if ($variables['element']['#field_name'] == 'field_newsclip_url') {
    $url = $variables['items'][0]['#markup']; 
    $url = (substr($url, 0, 7) != 'http://') ? "http://$url" : $url;
    $url =  url($url, array('external' => TRUE));
    $variables['items'][0]['#markup'] = l($url, $url); 
  }
}

/**
 * Implements hook_node_view().
 */
function news_clips_node_view($node, $view_mode, $langcode){
  if ($node->type == 'news_clip' && $view_mode == 'full') {
    // Create news clip headline.
    $safe_headline = t(check_plain($node->title));
    $node->content['headline'] = array (
      '#theme' => 'news_clips_headline',
      '#weight' => -1,
      '#items' => array(
        'headline' => $node->title,
        'safe_headline' => $safe_headline,
      ),
    );
  }
}

/**
 * Callback for theme_news_clips_headline().
 */
function theme_news_clips_headline($variables) {
  $headline = $variables['element']['#items']['safe_headline'];
  $output = '<div class="news-clip-headline">' . $headline . '</div>';

  return $output;
}

/**
 * Implements hook_preprocess_page().
 */
function news_clips_preprocess_page(&$vars) {
  // If it's a news clip, set title to empty string.
  // Give node--news-clip.tpl.php control of the title.
  if (isset($vars['page']['content']['system_main']['nodes'])) {
    $nodes = $vars['page']['content']['system_main']['nodes'];
    $count = 0;
    foreach ($nodes as $nid => $items) {
      if (is_int($nid)) {
        ++$count;
        $node_id = $nid;
      }
    }
    // If there's only 1 node, assume it's a full node page.
    $type = $nodes[$node_id]['body']['#object']->type;
    if ($count == 1 && $type == 'news_clip') {
      $vars['title'] = '';
    }
  }
}

/**
 * Implements hook_init().
 * 
 * @todo Seems like this stylesheet should get added
 *   to a renderable array as an #attached element somewhere,
 *   but it doesn't seem to work to do it in 
 *   hook_preprocess_node or hook_node_view.
 */
function news_clips_init() {
  $path = drupal_get_path('module', 'news_clips') ."/theme";
  $css = $path ."/news_clips.css";
  drupal_add_css($css);
}

/**
 * Impliments hook_theme().
 */
function news_clips_theme($existing, $type, $theme, $path) {

  // Note: Open Public features do this here: 
  //  $item = $existing['node'];
  // But I'm not sure this is really necessary.
  // Civic features get called after node module. If this (above) line
  // is necessary, increase module weight to 1, otherwise 
  // $existing['node'] will be empty.
  $items = array(
    'news_clips_headline' => array(
      'render element' => 'element',
    ),
    'node__news_clip' => array(
      'render element' => 'elements',
      'path' => drupal_get_path('module', 'news_clips') ."/theme",
      'template' => 'node--news-clip',
    ),
    'node__news_organization' => array(
      'render element' => 'elements',
      'path' => drupal_get_path('module', 'news_clips') ."/theme",
      'template' => 'node--news-organization',  
    ),
    /*
    'field__field_news_by' => array(
      'render element' => 'elements',
      'path' => drupal_get_path('module', 'news_clips') ."/theme",
      'template' => 'field--field-news-by',
    ),
    // */
  );

  return $items;
}

//---------------------------------------------------------------------------//
//   Internal functions. Prep variables for node--news-clip.tpl.php.         //
//---------------------------------------------------------------------------//

/**
 * Return image to be displayed as newsclip banner in the header
 * of the news clip.
 *
 * @param $node
 * A news_organization node.
 *
 * @return $banner
 * HTML, <img /> element to be used as banner or newspaper masthead.
 *
 * @todo Replace $output with render array.
 */
function _news_clips_banner($node) {
  // Find out if the news clip banner is supposed to be displayed (true / false).
  foreach ($node->field_news_display_banner as $array) {
    $display_banner = $array[0]['value'];
  }
  if (isset($node->field_news_org_logo) && $display_banner) {
    // Use foreach to handle language here: $node->field_example['lang'][0].
    foreach ($node->field_news_org_logo as $array) {
      $uri = $array[0]['uri'];
    }
    // Get image element.
    $url = file_create_url($uri);
    $alt = check_plain($node->title);
    $img = '<img src="' . $url . '" alt="' . $alt . '" />';
    // Get link to news organization's website.
    $url = _news_clips_org_website($node);
    // Create $output.
    $output = ($url) ? "<a href='$url' target='_blank'>$img</a>" : $img;
  }
  else {
    // Either $display_banner was set to false or no image was uploaded.
    // Get link to news organization's website.
    $url = _news_clips_org_website($node);
    // Create $output.
    $output = ($url) ? "<a href='$url' target='_blank'>$$node->title</a>" : $node->title;
  }

return $output;
}

/**
 * @param $node
 *  Object. News organization node.
 * 
 * @return string
 *  URL to news organization's website.
 */
function _news_clips_org_website($node) {
  if (isset($node->field_news_org_website)) {
    foreach ($node->field_news_org_website as $array) {
      $url = url($array[0]['safe_value'], array('external' => TRUE));
    }
  }
  if (isset($url)) {
    return $url;
  } else {
    return FALSE;
  }
}

/**
 * @param $node
 *  A news_organization node.
 * 
 * @return $org_type.
 *  String, type of news organization (e.g. newspaper).
 */
function _news_clips_org_type($node){
  if (isset($node->field_news_org_type)) {
    foreach ($node->field_news_org_type as $array) {
     $org_type = check_plain($array[0]['value']);
    }
    return $org_type; 
  } else {
    return FALSE;
  }
}

