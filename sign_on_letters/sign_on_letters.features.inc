<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function sign_on_letters_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function sign_on_letters_node_info() {
  $items = array(
    'sign_on_letter' => array(
      'name' => t('Sign-on Letter'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'signatory' => array(
      'name' => t('Signatory'),
      'module' => 'features',
      'description' => t('People who have signed onto a sign-on letter'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
function sign_on_letters_views_api() {
  return array(
    'api' => '2',
  );
}
