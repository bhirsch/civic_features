<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function events_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Main Menu',
    'description' => 'Main navigation menu. Menu items for any enabled features appear here.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main Menu');
  t('Main navigation menu. Menu items for any enabled features appear here.');


  return $menus;
}
