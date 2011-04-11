<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function video_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-video-form-group_video'
  $field_groups['node-video-form-group_video'] = array(
    'group_name' => 'group_video',
    'entity_type' => 'node',
    'bundle' => 'video',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Video',
    'weight' => '1',
    'children' => array(
      '0' => 'field_video_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );

  return $field_groups;
}
