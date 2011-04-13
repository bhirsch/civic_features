<?php

/**
 * Implementation of hook_strongarm().
 */
function coalition_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_coalition_member';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'menu' => '0',
    'path' => '4',
  );

  $export['content_extra_weights_coalition_member'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_coalition_member';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_coalition_member'] = $strongarm;
  return $export;
}
