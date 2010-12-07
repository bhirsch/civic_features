<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function legislation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:legislation
  $menu_links['features:legislation'] = array(
    'menu_name' => 'features',
    'link_path' => 'legislation',
    'router_path' => 'legislation',
    'link_title' => 'Legislation',
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
  t('Legislation');


  return $menu_links;
}
