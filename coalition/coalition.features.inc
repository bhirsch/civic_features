<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function coalition_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "fcontrolpanel" && $api == "default_fcontrolpanel_fcontrol") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function coalition_imagecache_default_presets() {
  $items = array(
    'scale_175x175' => array(
      'presetname' => 'scale_175x175',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '175',
            'height' => '175',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function coalition_node_info() {
  $items = array(
    'coalition_member' => array(
      'name' => t('Coalition Member'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
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
function coalition_views_api() {
  return array(
    'api' => '2',
  );
}
