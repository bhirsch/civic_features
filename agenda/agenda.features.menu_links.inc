<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function agenda_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:agenda
  $menu_links['features:agenda'] = array(
    'menu_name' => 'features',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
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
  t('Agenda');


  return $menu_links;
}
