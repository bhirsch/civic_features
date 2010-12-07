<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function page_imagecache_default_presets() {
  $items = array(
    'crop_615x346' => array(
      'presetname' => 'crop_615x346',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '615',
            'height' => '346',
          ),
        ),
      ),
    ),
    'crop_75x75' => array(
      'presetname' => 'crop_75x75',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '75',
            'height' => '75',
          ),
        ),
      ),
    ),
    'crop__100x100' => array(
      'presetname' => 'crop__100x100',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '100',
          ),
        ),
      ),
    ),
    'crop__150x150' => array(
      'presetname' => 'crop__150x150',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '150',
          ),
        ),
      ),
    ),
    'crop__200x200' => array(
      'presetname' => 'crop__200x200',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '200',
          ),
        ),
      ),
    ),
    'crop__250x250' => array(
      'presetname' => 'crop__250x250',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '250',
            'height' => '250',
          ),
        ),
      ),
    ),
    'crop__300x300' => array(
      'presetname' => 'crop__300x300',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '300',
            'height' => '300',
          ),
        ),
      ),
    ),
    'scale_75x75' => array(
      'presetname' => 'scale_75x75',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '75',
            'height' => '75',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'scale__100x100' => array(
      'presetname' => 'scale__100x100',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'scale__150x150' => array(
      'presetname' => 'scale__150x150',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '150',
            'height' => '150',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'scale__200x200' => array(
      'presetname' => 'scale__200x200',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'scale__250x250' => array(
      'presetname' => 'scale__250x250',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250',
            'height' => '250',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'scale__350x350' => array(
      'presetname' => 'scale__350x350',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '350',
            'height' => '350',
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
function page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('Static page.'),
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
