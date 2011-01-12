<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function press_releases_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:pressreleases
  $menu_links['features:pressreleases'] = array(
    'menu_name' => 'features',
    'link_path' => 'pressreleases',
    'router_path' => 'pressreleases',
    'link_title' => 'Press Releases',
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
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Press Releases');


  return $menu_links;
}
