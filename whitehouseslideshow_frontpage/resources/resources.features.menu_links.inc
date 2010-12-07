<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function resources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:resources
  $menu_links['features:resources'] = array(
    'menu_name' => 'features',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
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
  t('Resources');


  return $menu_links;
}
