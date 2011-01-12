<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function news_clips_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:newsclips
  $menu_links['features:newsclips'] = array(
    'menu_name' => 'features',
    'link_path' => 'newsclips',
    'router_path' => 'newsclips',
    'link_title' => 'News Clips',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News Clips');


  return $menu_links;
}
