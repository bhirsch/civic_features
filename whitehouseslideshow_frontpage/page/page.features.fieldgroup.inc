<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function page_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_map
  $groups['page-group_map'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_map',
    'label' => 'Map',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_map',
      '1' => 'field_map_position',
    ),
  );

  // Exported group: group_pics
  $groups['page-group_pics'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_pics',
    'label' => 'Pictures',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-70',
    'fields' => array(
      '0' => 'field_pic',
      '1' => 'field_pic_size',
      '2' => 'field_pic_align',
    ),
  );

  // Exported group: group_teaser
  $groups['page-group_teaser'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_teaser',
    'label' => 'Teaser',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-60',
    'fields' => array(
      '0' => 'field_teaser',
      '1' => 'field_teaser_auto',
    ),
  );

  // Exported group: group_video
  $groups['page-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_video',
    'label' => 'Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-80',
    'fields' => array(
      '0' => 'field_video_url',
      '1' => 'field_video_size',
      '2' => 'field_video_align',
      '3' => 'field_video_autoplay',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Map');
  t('Pictures');
  t('Teaser');
  t('Video');

  return $groups;
}
