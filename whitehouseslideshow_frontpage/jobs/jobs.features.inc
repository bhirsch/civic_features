<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function jobs_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'module' => 'features',
      'description' => t('Job postings / job descriptions'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'has_body' => '1',
      'body_label' => t('Job Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function jobs_views_api() {
  return array(
    'api' => '2',
  );
}
