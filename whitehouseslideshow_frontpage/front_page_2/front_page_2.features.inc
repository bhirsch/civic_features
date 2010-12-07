<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function front_page_2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function front_page_2_imagecache_default_presets() {
  $items = array(
    'crop_428x270' => array(
      'presetname' => 'crop_428x270',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '428',
            'height' => '270',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function front_page_2_views_api() {
  return array(
    'api' => '2',
  );
}
