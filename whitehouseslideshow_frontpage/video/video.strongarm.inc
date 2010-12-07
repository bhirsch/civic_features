<?php

/**
 * Implementation of hook_strongarm().
 */
function video_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video';
  $strongarm->value = array(
    'title' => '-1000',
    'body_field' => '-2',
    'revision_information' => '150',
    'menu' => '210',
    'taxonomy' => '100',
    'path' => '200',
  );

  $export['content_extra_weights_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = 'video/[title-raw]';

  $export['pathauto_node_video_pattern'] = $strongarm;
  return $export;
}
