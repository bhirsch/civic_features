<?php 
/**
 * @file civic_news_clips.theme.inc
 */

/**
 * Implements hook_preprocess_node().
 * 
 * TODO Theme news_organization node like this.
 */
function civic_news_clips_preprocess_node(&$vars) {
  $node = $vars['node'];
  if ($node->type == 'news_clip') {

    // There should only be one $node->field_news_org,
    // but it could be:
    //   $node->field_news_org['und'][0]
    // or 
    //   $node->field_news_org['en'][0]
    //   (presumably 'en' could be any language)
    // depending on whether translation is enabled or not.

    // Get get variables from related news organization.
    foreach ($node->field_news_org as $array) {
       $nid = $array[0]['nid'];
       $org_node = node_load($nid);
    }
    $vars['organization_type'] = _civic_news_clips_org_type($org_node);
  }
    /*
//dsm($org_node, 'org_node');
    $vars['org_name'] = _civic_news_clips_org_name($org_node);
    $vars['banner'] = _civic_news_clips_banner($org_node);
    $vars['org_website'] = _civic_news_clips_org_website($org_node);

    // Get variables from the news clip.
    $vars['date'] = _civic_news_clips_date($node); 
    $vars['headline'] = $headline; 
    //$vars['by'] = _civic_news_clips_by($node); 
    // headline + subhead
    $headline = check_plain($node->title);
    $subhead = $node->field_news_subhead[0]['safe'];
    // external links
    $clip_website = $node->field_newsclip_url[0]['safe'];
    if ($clip_website) {
      $clip_website = url($clip_website, array('external' => TRUE));
      $options = array(
        'attributes' => array(
          'class' => 'news-headline-link',
          'target' => '_blank',
        ),
      );
      $headline_link = l($headline, $clip_website, $options);
      $subhead_link = l($subhead, $clip_website, $options);
    }
    // News Contact 
    foreach ($node->field_news_contact as $author_nid) {
      $author_node = node_load($author_nid);
      $author[] = check_plain($author_node->title);
    }
    // By Line
    $by = $node->field_news_by[0]['safe'];
    // vars
    $vars['clip_website'] = $clip_website; 
    $vars['headline_link'] = $headline_link; 
    $vars['subhead'] = $subhead; 
    $vars['subhead_link'] = $subhead_link; 
    $vars['author'] = $author; 

    // FOOTER
    $variables['footer'] = check_markup(variable_get('news_clips_footer', NULL));

      // TODO Use Render API #attached here to attach CSS?
      if (isset($vars['type']) && $vars['type'] === 'news_clip') {
        drupal_add_css(drupal_get_path('module', 'news_clip') . '/theme/civic_news_clips.css');
      }
// */
}

/**
 *   @todo Revisit. Maybe it would be better to make title/headline its own field and use auto_nodetitle for title field.
 */

/**
 * Implements hook_node_view().
 */
function civic_news_clips_node_view($node, $view_mode, $langcode){
  if ($node->type == 'news_clip' && $view_mode == 'full') {
// dsm($node);
    // Create news clip headline.
    $safe_headline = t(check_plain($node->title));
    $node->content['headline'] = array (
      '#theme' => 'civic_news_clips_headline',
      '#weight' => -1,
      '#items' => array(
        'headline' => $node->title,
        'safe_headline' => $safe_headline,
      ),
    );
    // TODO Add 'By' to by-line. This doesn't work...
    /*
    $by = $node->content['field_news_by']['#items'][0]['safe_value'];
    $node->content['field_news_by']['#items'][0]['safe_value'] = t('By') . " $by";

    $by = $node->content['field_news_by']['#items'][0]['value'];
    $node->content['field_news_by']['#items'][0]['value'] = t('By') . " $by";
    // */
  }
}
// */

function theme_civic_news_clips_headline($variables) {
//dsm($variables, 'variables');
  $headline = $variables['element']['#items']['safe_headline'];
//dsm($headline, 'headline');
  $output = '<div class="news-clip-headline">' . $headline . '</div>';

  return $output;
}

/**
 * Implements hook_preprocess_page().
 */
function civic_news_clips_preprocess_page(&$vars) {
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

function civic_news_clips_init() {
  // @todo Seems like this stylesheet should get added
  //   to a renderable array as an #attached element somewhere,
  //   but it doesn't seem to work to do it in 
  //   hook_preprocess_node or hook_node_view.
  $path = drupal_get_path('module', 'civic_news_clips') ."/theme";
  $css = $path ."/civic_news_clips.css";
  drupal_add_css($css);
}

/**
 * Impliments hook_theme().
 */
function civic_news_clips_theme($existing, $type, $theme, $path) {

  // Note: Open Public features do this here: 
  //  $item = $existing['node'];
  // But I'm not sure this is really necessary.
  // Civic features get called after node module. If this (above) line
  // is necessary, increase module weight to 1, otherwise 
  // $existing['node'] will be empty.
  $items = array(
    'civic_news_clips_headline' => array(
      'render element' => 'element',
    ),
    'node__news_clip' => array(
      'render element' => 'elements',
      'path' => drupal_get_path('module', 'civic_news_clips') ."/theme",
      'template' => 'node--news-clip',
    ),
    /*
    'field__field_news_org_logo' => array(
      'render element' => 'elements',
      'path' => drupal_get_path('module', 'civic_news_clips') ."/theme",
      'template' => 'field--field-news-org-logo',
    ),
    // */
  );

  return $items;
}

/*
function civic_news_clips_theme_registry_alter(&$theme_registry) {
 dsm($theme_registry);
 //dsm($theme_registry['node__news_clip'], 'news clip');
 //dsm($theme_registry['node__site_page'], 'site page');
}
// */

/*
function civic_news_clips_page_alter(&$page) {
 // dsm($page);
//  $page['#theme'] = array('civic_news_clips_test');
}
// */

/*
function theme_civic_news_clips_test(&$vars) {
  dsm($vars);
  dsm('overriding $page[#theme]');
}
// */

//---------------------------------------------------------------------------//
//   Internal functions. Prep variables for node--news-clip.tpl.php.         //
//---------------------------------------------------------------------------//

/**
 * @todo Can nodes be themed with render API? If so, update functions below.
 */

/**
 * @param $node
 *  Object. News organization node.
 *
 * @param $link
 *  Boolean. Return <a> tag, linking to organization
 *  website if available.
 * 
 * @return string 
 *  Name of the news organization.
 */
function _civic_news_clips_org_name($node, $link = TRUE) {
  $org_name = check_plain($node->title);
  $url = _civic_news_clips_org_website($node);
  $output = ($url) ? "<a href='$url'>$org_name</a>" : $org_name;

  return $output;
}

/**
 * Return image to be displayed as newsclip banner in the header
 * of the news clip.
 * 
 * @param $node
 *  A news_organization node.
 * 
 * TODO Handle banner sizing here somehow.
 * @return $banner
 *  HTML, <img /> element to be used as banner or newspaper masthead.
 */
function _civic_news_clips_banner($node) {
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
  } else {
    // Either $display_banner was set to false or no image was uploaded.
    return FALSE; 
  }
  // Get link to news organization's website.
  $url = _civic_news_clips_org_website($node);
  // Create $output.
  $output = ($url) ? "<a href='$url' target='_blank'>$img</a>" : $img;
    
  return $output;
}

/**
 * @param $node
 *  Object. News organization node.
 * 
 * @return string
 *  URL to news organization's website.
 */
function _civic_news_clips_org_website($node) {
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
function _civic_news_clips_org_type($node){
  if (isset($node->field_news_org_type)) {
    foreach ($node->field_news_org_type as $array) {
     $org_type = check_plain($array[0]['value']);
    }
    return $org_type; 
  } else {
    return FALSE;
  }
}

/**
 * @param $node
 *  A news_organization node.
 * 
 * @return $date
 *  String. Formatted date from datestamp. 
 */
function _civic_news_clips_date($node) {
  if (isset($node->field_newsclip_date)) {
    foreach ($node->field_newsclip_date as $array) {
      $datestamp = $array[0]['value'];
    }
    // Format date from unix timestamp
    $d = getdate($datestamp);
    $date = $d['weekday'] .', '. $d['month'] .' '. $d['mday'] .', '. $d['year'];
  } else {
    $date = FALSE;
  }

  return $date;
}

/**
 * @param $node
 *  A news_organization node.
 * 
 * @return $by.
 *  String, type of news organization (e.g. newspaper).
 */
/*
function _civic_news_clips_by($node){
  if (isset($node->field_news_org_type)) {
    foreach ($node->field_news_org_type as $array) {
     $org_type = check_plain($array[0]['value']);
    }
    return $org_type; 
  } else {
    return FALSE;
  }
}
// TODO break this up into smaller functions.
/*
function _civic_news_clips_tbd() {
  $banner = $node->field_news_org['en'][0];
  if ($banner) { // make sure there is a banner to theme here
    // imagecache preset
    $preset_namespace = content_format('field_pic_size', $node->field_pic_size[0]);
    $preset_namespace = strip_tags($preset_namespace);
    $preset_namespace = trim($preset_namespace);

    $image_filepath = $banner['filepath'];
    $alt = $node->title; // use org name for alt
    $title = $banner['data']['title'];
    $attributes = ''; // TODO handle attributes

    $banner = theme('imagecache', $preset_namespace, $image_filepath, $alt, $title, $attributes);
  } 
}
// */

