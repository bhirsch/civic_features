<?php 
/**
 * @file civic_news_clips.theme.inc
 */

/**
 * Implements hook_preprocess_node().
 */
function civic_news_clips_preprocess_node(&$vars) {
  dsm('hook_preprocess_node');
  $node = $vars['node'];
  if ($node->type == 'news_clip') {
dsm($node);
   
  // BANNER
  // Get banner and related variables from news organization node
  //
  // There should only be one $node->field_news_org,
  // but it could be:
  //   $node->field_news_org['und'][0]
  // or 
  //   $node->field_news_org['en'][0]
  //   (presumably 'en' could be any language)
  // depending on whether translation is enabled or not.
  foreach ($node->field_news_org as $array) {
     $nid = $array[0]['nid'];
     $org_node = node_load($nid);
  }
dsm($org_node, 'org_node');
  $vars['banner'] = _civic_news_clips_banner($org_node);
  $vars['banner_link'] = _civic_news_clips_banner_link($org_node);
/*
  $vars['size'] = $b->size; 
  $vars['website'] = $b->website; 

  // HEADER
  // org info
  $org_node = node_load($node->field_news_org[0]['nid']);
  $b = sws_news_org_info($org_node);
  $org_name = $b->org_name; 
  $org_name_link = $b->org_name_link;
  $org_type = $b->org_type;
  // use image with link to org's website if available
  $banner = $b->banner;  
  $banner_link = $b->banner_link;  
  $display_banner = $b->display_banner;
  $org_website = $b->website; 
  // news clip info
  // Format date from unix timestamp
  $d = getdate($node->field_newsclip_date[0]['value']);
  $date = $d['weekday'] .', '. $d['month'] .' '. $d['mday'] .', '. $d['year'];
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
  $vars['org_name'] = $org_name; 
  $vars['org_name_link'] = $org_name_link; 
  $vars['org_type'] = $org_type;
  $vars['banner'] = $banner; 
  $vars['banner_link'] = $banner_link; 
  $vars['display_banner'] = $display_banner; 
  $vars['org_website'] = $org_website; 
  $vars['clip_website'] = $clip_website; 
  $vars['date'] = $date; 
  $vars['headline'] = $headline; 
  $vars['headline_link'] = $headline_link; 
  $vars['subhead'] = $subhead; 
  $vars['subhead_link'] = $subhead_link; 
  $vars['author'] = $author; 
  $vars['by'] = $by; 

  // FOOTER
  $variables['footer'] = check_markup(variable_get('news_clips_footer', NULL));

    // TODO Use Render API #attached here to attach CSS?
    if (isset($vars['type']) && $vars['type'] === 'news_clip') {
      drupal_add_css(drupal_get_path('module', 'news_clip') . '/theme/civic_news_clips.css');
    }
  // */
  }
}

/**
 * Implements hook_node_view().
 */
/*
function civic_news_clips_node_view($node, $view_mode, $langcode){
  dsm('hook_node_view');
  dsm($node, 'node');
  dsm($view_mode, 'view mode');
}
// */

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
  $item = array();
  $item['render element'] = 'elements';
  $item['path'] = drupal_get_path('module', 'civic_news_clips') ."/theme";
  $item['template'] = 'node--news-clip';

  return array("node__news_clip" => $item);
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
 *  A news_organization node.
 * 
 * TODO Handle banner sizing here somehow.
 * @return $banner
 *  HTML, <img /> element to be used as banner or newspaper masthead.
 */
function _civic_news_clips_banner($node) {
  // Use foreach to handle language here: $node->field_example['lang'][0].
  foreach ($node->field_news_org_logo as $array) {
     $uri = $array[0]['uri'];
  }
  $url = file_create_url($uri);
  $alt = check_plain($node->title);
  $img = '<img src="' . $url . '" alt="' . $title . '" />';
    
  return $img;
}

/**
 * @param $node
 *  A news_organization node.
 * 
 * TODO Handle banner sizing here somehow.
 * @return $banner
 *  HTML, <img /> element to be used as banner or newspaper masthead.
 */
function _civic_news_clips_banner_link($node) {
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

    // website
    $website = $node->field_news_org_website[0]['value'];
    if ($website) {
      $options = array(
        'external' => TRUE, 
       );
      $website = url($website, $options);
      // create link on banner
      $options = array('html' => TRUE, 'attributes' => array('target' => '_blank'));
      if ($website && $banner) {
        $banner_link = l($banner, $website, $options);
      }
    }
  $org_name = check_plain($node->title);

  $b->banner = $banner;
  $b->banner_link = $banner_link;
  $b->website = $website; 
  $b->size = $preset_namespace;
  $b->display_banner = $node->field_news_display_banner[0]['value'];
  $b->org_name = $org_name;
  $b->org_name_link = ($website) ? l($org_name, $website, $options) : '' ;
  $b->org_type = check_plain($node->field_news_org_type[0]['value']);

  return $b;
}
// */

