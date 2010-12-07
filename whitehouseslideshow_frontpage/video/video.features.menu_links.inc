<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function video_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:video
  $menu_links['features:video'] = array(
    'menu_name' => 'features',
    'link_path' => 'video',
    'router_path' => 'video',
    'link_title' => 'Video',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Video');


  return $menu_links;
}
