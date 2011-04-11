<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function agenda_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-agenda_item-form-group_attachments'
  $field_groups['node-agenda_item-form-group_attachments'] = array(
    'group_name' => 'group_attachments',
    'entity_type' => 'node',
    'bundle' => 'agenda_item',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Attachments',
    'weight' => '1',
    'children' => array(
      '0' => 'field_attachment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  return $field_groups;
}
