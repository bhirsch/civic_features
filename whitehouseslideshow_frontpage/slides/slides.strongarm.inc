<?php

/**
 * Implementation of hook_strongarm().
 */
function slides_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_slide';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '3',
    'options' => '4',
    'menu' => '0',
    'taxonomy' => '-1',
    'path' => '2',
  );

  $export['content_extra_weights_slide'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slide';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_slide'] = $strongarm;
  return $export;
}
