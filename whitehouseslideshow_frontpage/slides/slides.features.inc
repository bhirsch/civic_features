<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function slides_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function slides_imagecache_default_presets() {
  $items = array(
    'scale_and_crop_720x240' => array(
      'presetname' => 'scale_and_crop_720x240',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '720',
            'height' => '240',
          ),
        ),
      ),
    ),
    'slideshow_910x240' => array(
      'presetname' => 'slideshow_910x240',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '910',
            'height' => '240',
          ),
        ),
      ),
    ),
    'slideshow_970x240' => array(
      'presetname' => 'slideshow_970x240',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '970',
            'height' => '240',
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
function slides_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'module' => 'features',
      'description' => t('Create slides to add to slideshow(s)'),
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
