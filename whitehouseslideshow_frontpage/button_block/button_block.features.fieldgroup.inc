<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function button_block_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_background
  $groups['button-group_background'] = array(
    'group_type' => 'standard',
    'type_name' => 'button',
    'group_name' => 'group_background',
    'label' => 'Button Background',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
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
          'format' => 'fieldset',
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
    'weight' => '-200',
    'fields' => array(
      '0' => 'field_button_image',
      '1' => 'field_button_bgd_color',
      '2' => 'field_button_size',
    ),
  );

  // Exported group: group_text
  $groups['button-group_text'] = array(
    'group_type' => 'standard',
    'type_name' => 'button',
    'group_name' => 'group_text',
    'label' => 'Button Text',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
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
          'format' => 'fieldset',
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
    'weight' => '-180',
    'fields' => array(
      '0' => 'field_button_display_title',
      '1' => 'field_button_margin_top',
      '2' => 'field_button_margin_lft',
      '3' => 'field_button_txt_color',
      '4' => 'field_button_font_family',
      '5' => 'field_button_font_size',
      '6' => 'field_button_font_weight',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Button Background');
  t('Button Text');

  return $groups;
}
