<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function news_clips_ctools_plugin_api() {
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
function news_clips_node_info() {
  $items = array(
    'news_clip' => array(
      'name' => t('News Clip'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'news_contact' => array(
      'name' => t('News Contact'),
      'module' => 'features',
      'description' => t('People who produce news (reporters, bloggers, etc.)'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'news_organization' => array(
      'name' => t('News Organization'),
      'module' => 'features',
      'description' => t('Any news outlet (radio station, newspaper, blog, etc.).'),
      'has_title' => '1',
      'title_label' => t('Organization Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function news_clips_views_api() {
  return array(
    'api' => '2',
  );
}
