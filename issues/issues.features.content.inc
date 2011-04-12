<?php

/**
 * Implementation of hook_content_default_fields().
 */
function issues_content_default_fields() {
  $fields = array();

  // Exported field: field_attachment
  $fields['issue-field_attachment'] = array(
    'field_name' => 'field_attachment',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt doc docx odt xls xlsx ods pdf jpg png jpeg tiff gif ',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Attachment',
      'weight' => '-539',
      'description' => 'Upload file attachments (e.g. fact sheets, handouts, etc.)',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_pic
  $fields['issue-field_pic'] = array(
    'field_name' => 'field_pic',
    'type_name' => 'issue',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_multimedia',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'scale__250x250_default',
        'exclude' => 0,
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
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => 'picture',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Picture',
      'weight' => '-69',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_pic_align
  $fields['issue-field_pic_align'] = array(
    'field_name' => 'field_pic_align',
    'type_name' => 'issue',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_multimedia',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'allowed_values' => 'left
right
alternate',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'alternate',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Picture Alignment',
      'weight' => '-67',
      'description' => 'Select picture alignment.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_pic_size
  $fields['issue-field_pic_size'] = array(
    'field_name' => 'field_pic_size',
    'type_name' => 'issue',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_multimedia',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '$presets = imagecache_presets();
foreach ($presets as $preset) {
  $name = $preset[\'presetname\'];
  if ($name != \'crop_615x346\' && substr($name, 0, 6) != \'button\') {
    $size[$name] = $name;
  }
}
ksort($size);

return $size;',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '3',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Picture Size',
      'weight' => '-68',
      'description' => 'Set image size. Scale resizes the image, maintaining it\'s original proportions. Crop resizes and then crops. (For example, scale_100x100 resizes the image so it\'s longest side is 100 pixels. crop_100x100 resizes the image so it\'s shortest side is 100 pixels, then crops the image so to display in a 100x100 pixel square.) Note: Enlarging an image beyond its original resolution reduces the picture\'s quality.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_related_posts
  $fields['issue-field_related_posts'] = array(
    'field_name' => 'field_related_posts',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'agenda_item' => 'agenda_item',
      'bio' => 'bio',
      'event' => 'event',
      'issue' => 'issue',
      'legislation' => 'legislation',
      'news_clip' => 'news_clip',
      'page' => 'page',
      'press_release' => 'press_release',
      'resource' => 'resource',
      'tweet' => 'tweet',
      'video' => 'video',
      'button' => 0,
      'news_contact' => 0,
      'news_organization' => 0,
      'rotor_item' => 0,
      'twitter_feed' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_related_posts][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Posts',
      'weight' => '125',
      'description' => 'Enter the title of any post on the website. Related posts will appear in the "Related Posts" block in the sidebar alongside this post. If the related post includes video, the video will appear in the sidebar.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_teaser
  $fields['issue-field_teaser'] = array(
    'field_name' => 'field_teaser',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'text_processing' => '1',
    'max_length' => '300',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '-59',
      'description' => 'To create a custom teaser, add up to 250 characters here. <br/>
<em>(Note: The absolute limit is actually 300 characters, including the characters in your HTML tags.)</em>',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_teaser_auto
  $fields['issue-field_teaser_auto'] = array(
    'field_name' => 'field_teaser_auto',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|
1|Automatically create teaser from the first 250 characters of this post.',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Auto-generate Teaser',
      'weight' => '-58',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_video_align
  $fields['issue-field_video_align'] = array(
    'field_name' => 'field_video_align',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'allowed_values' => 'center 
left
right',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'left',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Alignment',
      'weight' => '-77',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_video_autoplay
  $fields['issue-field_video_autoplay'] = array(
    'field_name' => 'field_video_autoplay',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|
1| Enable auto-play (begin playing video automatically when page loads)',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Autoplay',
      'weight' => '-76',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_video_size
  $fields['issue-field_video_size'] = array(
    'field_name' => 'field_video_size',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'allowed_values' => 'width:445 height:364
width:245 height:200
width:205 height:167',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'width:445 height:364',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Size',
      'weight' => '-78',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_video_url
  $fields['issue-field_video_url'] = array(
    'field_name' => 'field_video_url',
    'type_name' => 'issue',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'max_length' => '255',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_video_url][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video URL',
      'weight' => '-79',
      'description' => 'Paste the URL of a video here. Example: http://www.youtube.com/watch?v=otA7tjinFX4',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachment');
  t('Auto-generate Teaser');
  t('Picture');
  t('Picture Alignment');
  t('Picture Size');
  t('Related Posts');
  t('Teaser');
  t('Video Alignment');
  t('Video Autoplay');
  t('Video Size');
  t('Video URL');

  return $fields;
}
