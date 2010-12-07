<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function button_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function button_block_imagecache_default_presets() {
  $items = array(
    'button_150x36' => array(
      'presetname' => 'button_150x36',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '150',
            'height' => '36',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'button_245x57' => array(
      'presetname' => 'button_245x57',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '245',
            'height' => '57',
          ),
        ),
      ),
    ),
    'button_256x256' => array(
      'presetname' => 'button_256x256',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '256',
            'height' => '256',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'button_256x36' => array(
      'presetname' => 'button_256x36',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100%',
            'height' => '100%',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'button_256x60' => array(
      'presetname' => 'button_256x60',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '256',
            'height' => '60',
          ),
        ),
      ),
    ),
    'button_272x100' => array(
      'presetname' => 'button_272x100',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '272',
            'height' => '100',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'button_272x127' => array(
      'presetname' => 'button_272x127',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '272',
            'height' => '127',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'button_272x59' => array(
      'presetname' => 'button_272x59',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '272',
            'height' => '59',
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
function button_block_node_info() {
  $items = array(
    'button' => array(
      'name' => t('Button (or Widget)'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('HTML'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function button_block_views_api() {
  return array(
    'api' => '2',
  );
}
