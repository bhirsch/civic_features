<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function press_releases_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function press_releases_node_info() {
  $items = array(
    'press_release' => array(
      'name' => t('Press Release'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function press_releases_views_api() {
  return array(
    'api' => '2',
  );
}
