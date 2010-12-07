<?php

/**
 * Implementation of hook_strongarm().
 */
function page_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_page';
  $strongarm->value = array(
    'title' => '-1000',
    'body_field' => '-2',
    'revision_information' => '150 ',
    'menu' => '210',
    'taxonomy' => '100',
    'path' => '200',
  );

  $export['content_extra_weights_page'] = $strongarm;
  return $export;
}
