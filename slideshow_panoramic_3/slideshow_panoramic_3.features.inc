<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function slideshow_panoramic_3_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function slideshow_panoramic_3_imagecache_default_presets() {
  $items = array(
    'slideshow_784x297' => array(
      'presetname' => 'slideshow_784x297',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '784',
            'height' => '297',
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
function slideshow_panoramic_3_views_api() {
  return array(
    'api' => '2',
  );
}
