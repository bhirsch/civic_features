<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function slideshow_panoramic_4_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function slideshow_panoramic_4_imagecache_default_presets() {
  $items = array(
    'scale_684x427' => array(
      'presetname' => 'scale_684x427',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '684',
            'height' => '427',
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
function slideshow_panoramic_4_views_api() {
  return array(
    'api' => '2',
  );
}
