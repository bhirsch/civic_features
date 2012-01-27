<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fcp_webform_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "fcontrolpanel" && $api == "default_fcontrolpanel_fcontrol") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fcp_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'module' => 'features',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
