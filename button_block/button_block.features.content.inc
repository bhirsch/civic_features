<?php

/**
 * Implementation of hook_content_default_fields().
 */
function button_block_content_default_fields() {
  $fields = array();

  // Exported field: field_button_bgd_color
  $fields['button-field_button_bgd_color'] = array(
    'field_name' => 'field_button_bgd_color',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_background',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '7',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_button_bgd_color][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Background Color',
      'weight' => '-198',
      'description' => 'If no background image is uploaded, set a solid background color here. Enter a color like this: #000000. <a href=\'http://www.colorpicker.com/\' target=\'_blank\'>Use this color picker to find the value of your color.</a>',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_display_title
  $fields['button-field_button_display_title'] = array(
    'field_name' => 'field_button_display_title',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|
1|Display button title (un-check box if title is included in uploaded button image)',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display Button Title',
      'weight' => '-179',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_button_font_family
  $fields['button-field_button_font_family'] = array(
    'field_name' => 'field_button_font_family',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_button_font_family][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Font',
      'weight' => '-175',
      'description' => '(optional) Enter a comma separated list of fonts here. Fonts listed after the first font will be used as fall-backs when the browser doesn\'t support your first choice. Font names with spaces should be enclosed in quotes like this: "Times New Roman". Suggested web-safe fonts: http://www.w3schools.com/css/css_websafe_fonts.asp.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_font_size
  $fields['button-field_button_font_size'] = array(
    'field_name' => 'field_button_font_size',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '6',
      'default_value' => array(
        '0' => array(
          'value' => '18px',
          '_error_element' => 'default_value_widget][field_button_font_size][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Font Size',
      'weight' => '-174',
      'description' => 'E.g. 18px',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_font_weight
  $fields['button-field_button_font_weight'] = array(
    'field_name' => 'field_button_font_weight',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'normal
bold',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'normal',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Font Weight',
      'weight' => '-173',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_button_image
  $fields['button-field_button_image'] = array(
    'field_name' => 'field_button_image',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_background',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'white-overlay.png',
        'filepath' => 'sites/default/files/imagefield_default_images/white-overlay_0.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/white-overlay_0.png',
        'filesize' => 1742,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1265749520,
        'fid' => '54',
      ),
      'use_default_image' => 0,
      'label' => 'Button Image',
      'weight' => '-199',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_button_link
  $fields['button-field_button_link'] = array(
    'field_name' => 'field_button_link',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => 'group_link',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'bb_button',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'bb_button',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_button_link][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link (URL)',
      'weight' => '-202',
      'description' => 'Determine the destination URL here. (Where should the user go when they click this button? E.g. http://www.example.com/sign-up-form ) ',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_margin_lft
  $fields['button-field_button_margin_lft'] = array(
    'field_name' => 'field_button_margin_lft',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '10',
      'default_value' => array(
        '0' => array(
          'value' => '75px',
          '_error_element' => 'default_value_widget][field_button_margin_lft][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Left margin (of button title)',
      'weight' => '-177',
      'description' => 'E.g. 75px',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_margin_top
  $fields['button-field_button_margin_top'] = array(
    'field_name' => 'field_button_margin_top',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '10',
      'default_value' => array(
        '0' => array(
          'value' => '7px',
          '_error_element' => 'default_value_widget][field_button_margin_top][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Top margin (of button title)',
      'weight' => '-178',
      'description' => 'E.g. 7px',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_size
  $fields['button-field_button_size'] = array(
    'field_name' => 'field_button_size',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_background',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '$presets = imagecache_presets();
$presets = imagecache_presets();
foreach ($presets as $preset) {
$name = $preset[\'presetname\'];
  if (substr($name, 0, 6) == \'button\') {
    $button[$name] = $name;
  }
} 
return($button); ',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Button Size',
      'weight' => '-197',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_button_target
  $fields['button-field_button_target'] = array(
    'field_name' => 'field_button_target',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_link',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '_blank|Open link in new window
_self|Open link in same window',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '_self',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link behavior (target)',
      'weight' => '-201',
      'description' => 'To open a new window or tab when the link is clicked, select "_blank".',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_button_txt_color
  $fields['button-field_button_txt_color'] = array(
    'field_name' => 'field_button_txt_color',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_text',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '7',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '7',
      'default_value' => array(
        '0' => array(
          'value' => '#ffffff',
          '_error_element' => 'default_value_widget][field_button_txt_color][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Text Color',
      'weight' => '-176',
      'description' => 'Enter a color like this: #000000. <a href=\'http://www.colorpicker.com/\' target=\'_blank\'>Use this color picker to find the value of your color.</a>',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_button_weight
  $fields['button-field_button_weight'] = array(
    'field_name' => 'field_button_weight',
    'type_name' => 'button',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '
$a = array();
$k = 0;
for ($i = -15; $i <= 15; $i++) {
  $a[$k] = $i;
  $k++;
}
return $a;',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight',
      'weight' => '51',
      'description' => 'The list of buttons is ordered by weight, then alphabet. The lightest buttons (lowest numbers) float to the top and the heaviest buttons (hightest numbers) sink to the bottom.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background Color');
  t('Button Image');
  t('Button Size');
  t('Display Button Title');
  t('Font');
  t('Font Size');
  t('Font Weight');
  t('Left margin (of button title)');
  t('Link (URL)');
  t('Link behavior (target)');
  t('Text Color');
  t('Top margin (of button title)');
  t('Weight');

  return $fields;
}
