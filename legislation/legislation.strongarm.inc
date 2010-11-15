<?php

/**
 * Implementation of hook_strongarm().
 */
function legislation_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_legislation';
  $strongarm->value = array(
    'title' => '-1000',
    'body_field' => '-2',
    'revision_information' => '200',
    'menu' => '210',
    'taxonomy' => '100',
    'path' => '220',
  );

  $export['content_extra_weights_legislation'] = $strongarm;
  return $export;
}
