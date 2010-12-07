<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:events
  $menu_links['features:events'] = array(
    'menu_name' => 'features',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
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
  t('Events');


  return $menu_links;
}
