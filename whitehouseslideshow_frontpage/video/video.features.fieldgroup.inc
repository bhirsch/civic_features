<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function video_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_teaser
  $groups['video-group_teaser'] = array(
    'group_type' => 'standard',
    'type_name' => 'video',
    'group_name' => 'group_teaser',
    'label' => 'Teaser',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
        'label' => 'above',
      ),
    ),
    'weight' => '-60',
    'fields' => array(
      '0' => 'field_teaser',
      '1' => 'field_teaser_auto',
    ),
  );

  // Exported group: group_video
  $groups['video-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'video',
    'group_name' => 'group_video',
    'label' => 'Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
  t('Teaser');
  t('Video');

  return $groups;
}
