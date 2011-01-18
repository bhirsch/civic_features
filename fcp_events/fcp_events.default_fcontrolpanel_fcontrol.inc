<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_events_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Events';
  $fcontrol->title = 'New Event';
  $fcontrol->name = 'create_event';
  $fcontrol->path = 'node/add/event';
  $fcontrol->query = '';
  $fcontrol->description = 'New event';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = -1;

  $export['create_event'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Events';
  $fcontrol->title = 'Manage Events';
  $fcontrol->name = 'manage_events';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=event';
  $fcontrol->description = 'Edit, publish, unpublish, delete events';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_events'] = $fcontrol;
  return $export;
}
