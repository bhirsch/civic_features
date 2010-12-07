<?php

/**
 * Implementation of hook_strongarm().
 */
function agenda_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_agenda_item';
  $strongarm->value = array(
    'title' => '-1000',
    'body_field' => '-2',
    'revision_information' => '150',
    'menu' => '210',
    'taxonomy' => '100',
    'path' => '220',
  );

  $export['content_extra_weights_agenda_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agenda_item_pattern';
  $strongarm->value = 'agenda/[title-raw]';

  $export['pathauto_node_agenda_item_pattern'] = $strongarm;
  return $export;
}
