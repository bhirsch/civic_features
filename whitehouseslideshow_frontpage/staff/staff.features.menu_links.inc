<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:staff
  $menu_links['features:staff'] = array(
    'menu_name' => 'features',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Staff',
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
  t('Staff');


  return $menu_links;
}
