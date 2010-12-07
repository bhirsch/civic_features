<?php 

/**
 * @file theme.inc
 * 
 * Preprocessing to provide variables to button_block template files.
 */

/**
 * Implementation of template_preprocess().
 */
function template_preprocess_button_block_formatter_bb_button(&$variables) {
  $node = $variables['element']['#node'];
  $url = $node->field_button_link[0]['safe'];
  $id = button_block_id($node->title, $node->nid);
  $display_title = check_plain($node->field_button_display_title[0]['value']);

  // imagecache image
  $preset_name = check_plain($node->field_button_size[0]['value']);
  $preset_name = strip_tags($preset_name);
  $preset_name = trim($preset_name);
  $button_image = $node->field_button_image[0];
  $image_filepath = $button_image['filepath'];
  $alt = $button_image['data']['alt'];
  $title = $button_image['data']['title'];
  $attributes = ''; // TODO handle attributes

  $image = theme('imagecache', $preset_name, $image_filepath, $alt, $title, $attributes);
  $variables['url'] = $url;
  $variables['target'] = check_plain($node->field_button_target[0]['value']);
  $variables['id'] = $id; 
  $variables['title'] = $node->title;
  $variables['display_title'] = $display_title;
  $variables['image'] = $image;
  $variables['html'] = $node->body; // html widgets 
}


