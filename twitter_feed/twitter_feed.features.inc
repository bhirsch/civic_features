<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function twitter_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function twitter_feed_node_info() {
  $items = array(
    'tweet' => array(
      'name' => t('Tweet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'twitter_feed' => array(
      'name' => t('Twitter Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Twitter User'),
      'help' => '',
    ),
  );
  return $items;
}
