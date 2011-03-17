<?php

/**
 * Implementation of hook_strongarm().
 */
function sign_on_letters_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_signatory';
  $strongarm->value = array(
    'title' => '11',
    'revision_information' => '23',
    'author' => '22',
    'options' => '24',
    'menu' => '21',
    'path' => '25',
  );

  $export['content_extra_weights_signatory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sign_on_letter';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_sign_on_letter'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_signatory';
  $strongarm->value = array();

  $export['node_options_signatory'] = $strongarm;
  return $export;
}
