<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function legislation_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-legislation-form-group_pics'
  $field_groups['node-legislation-form-group_pics'] = array(
    'group_name' => 'group_pics',
    'entity_type' => 'node',
    'bundle' => 'legislation',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Pictures',
    'weight' => '2',
    'children' => array(
      '0' => 'field_pic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pictures',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );

  // Exported field_group: 'node-legislation-form-group_video'
  $field_groups['node-legislation-form-group_video'] = array(
    'group_name' => 'group_video',
    'entity_type' => 'node',
    'bundle' => 'legislation',
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
      'formatter' => 'collapsed',
    ),
  );

  return $field_groups;
}
