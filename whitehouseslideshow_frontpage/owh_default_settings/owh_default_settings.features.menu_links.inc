<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function owh_default_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:<front>
  $menu_links['features:<front>'] = array(
    'menu_name' => 'features',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
