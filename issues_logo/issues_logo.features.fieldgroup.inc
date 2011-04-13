<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function issues_logo_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_logo
  $groups['issue-group_logo'] = array(
    'group_type' => 'standard',
    'type_name' => 'issue',
    'group_name' => 'group_logo',
    'label' => 'Issue Logo',
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
    'weight' => '-998',
    'fields' => array(
      '0' => 'field_issue_logo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Issue Logo');

  return $groups;
}
