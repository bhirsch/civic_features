<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function header_picture_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_header_picture
  $groups['issue-group_header_picture'] = array(
    'group_type' => 'standard',
    'type_name' => 'issue',
    'group_name' => 'group_header_picture',
    'label' => 'Header Picture',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-999',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
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
    'weight' => '-995',
    'fields' => array(
      '0' => 'field_header_picture',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Picture');

  return $groups;
}
