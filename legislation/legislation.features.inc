<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function legislation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
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
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Bill Name'),
      'help' => '',
    ),
  );
  return $items;
}
