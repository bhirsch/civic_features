<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function issues_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:issues
  $menu_links['features:issues'] = array(
    'menu_name' => 'features',
    'link_path' => 'issues',
    'router_path' => 'issues',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Issues');


  return $menu_links;
}
