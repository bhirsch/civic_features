<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function spanish_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:boletinesdeprensa
  $menu_links['features:boletinesdeprensa'] = array(
    'menu_name' => 'features',
    'link_path' => 'boletinesdeprensa',
    'router_path' => 'boletinesdeprensa',
    'link_title' => 'Boletines de Prensa',
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
  // Exported menu link: features:eventos
  $menu_links['features:eventos'] = array(
    'menu_name' => 'features',
    'link_path' => 'eventos',
    'router_path' => 'eventos',
    'link_title' => 'Eventos',
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
  // Exported menu link: features:legislacion
  $menu_links['features:legislacion'] = array(
    'menu_name' => 'features',
    'link_path' => 'legislacion',
    'router_path' => 'legislacion',
    'link_title' => 'Legislación',
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
  // Exported menu link: features:noticias
  $menu_links['features:noticias'] = array(
    'menu_name' => 'features',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
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
  // Exported menu link: features:personal
  $menu_links['features:personal'] = array(
    'menu_name' => 'features',
    'link_path' => 'personal',
    'router_path' => 'personal',
    'link_title' => 'Personal',
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
  // Exported menu link: features:temas
  $menu_links['features:temas'] = array(
    'menu_name' => 'features',
    'link_path' => 'temas',
    'router_path' => 'temas',
    'link_title' => 'Temas',
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
  t('Boletines de Prensa');
  t('Eventos');
  t('Legislación');
  t('Noticias');
  t('Personal');
  t('Temas');


  return $menu_links;
}
