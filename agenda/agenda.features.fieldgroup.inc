<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function agenda_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_attachments
  $groups['agenda_item-group_attachments'] = array(
    'group_type' => 'standard',
    'type_name' => 'agenda_item',
    'group_name' => 'group_attachments',
    'label' => 'Attachments',
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
    'weight' => '-540',
    'fields' => array(
      '0' => 'field_attachment',
    ),
  );

  // Exported group: group_map
  $groups['agenda_item-group_map'] = array(
    'group_type' => 'standard',
    'type_name' => 'agenda_item',
    'group_name' => 'group_map',
    'label' => 'Map',
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
    'weight' => '-100',
    'fields' => array(
      '0' => 'field_map',
      '1' => 'field_map_position',
    ),
  );

  // Exported group: group_pictures
  $groups['agenda_item-group_pictures'] = array(
    'group_type' => 'standard',
    'type_name' => 'agenda_item',
    'group_name' => 'group_pictures',
    'label' => 'Pictures',
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
    'weight' => '-70',
    'fields' => array(
      '0' => 'field_pic',
      '1' => 'field_pic_size',
      '2' => 'field_pic_align',
    ),
  );

  // Exported group: group_teaser
  $groups['agenda_item-group_teaser'] = array(
    'group_type' => 'standard',
    'type_name' => 'agenda_item',
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
  $groups['agenda_item-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'agenda_item',
    'group_name' => 'group_video',
    'label' => 'Video',
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
  t('Attachments');
  t('Map');
  t('Pictures');
  t('Teaser');
  t('Video');

  return $groups;
}