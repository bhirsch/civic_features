<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function legislation_ctools_plugin_api() {
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
function legislation_node_info() {
  $items = array(
    'legislation' => array(
      'name' => t('Legislation'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Bill Name'),
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
function legislation_views_api() {
  return array(
    'api' => '2',
  );
}
