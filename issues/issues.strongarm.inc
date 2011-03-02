<?php

/**
 * Implementation of hook_strongarm().
 */
function issues_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_issue';
  $strongarm->value = array(
    'title' => '-1000',
    'body_field' => '-2',
    'revision_information' => '150 ',
    'author' => '20',
    'options' => '25',
    'menu' => '210',
    'taxonomy' => '1',
    'path' => '200',
  );

  $export['content_extra_weights_issue'] = $strongarm;
  return $export;
}
