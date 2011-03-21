<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function civic_news_clips_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function civic_news_clips_node_info() {
  $items = array(
    'news_clip' => array(
      'name' => t('News Clip'),
      'base' => 'node_content',
      'description' => t('A news clip from a newspaper, blog, or other media outlet.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'news_organization' => array(
      'name' => t('News Organization'),
      'base' => 'node_content',
      'description' => t('A news outlet (news paper, radio station, TV network, etc.)'),
      'has_title' => '1',
      'title_label' => t('Organization Name'),
      'help' => '',
    ),
  );
  return $items;
}
