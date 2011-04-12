<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function upcomingeventslist_events_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Events';
  $fcontrol->title = 'Recent Events Queue';
  $fcontrol->name = 'recent_events_nodequeue';
  $fcontrol->path = 'admin/content/nodequeue/7';
  $fcontrol->query = '';
  $fcontrol->description = 'Add/Remove items from Recent Events queue';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manipulate queues';
  $fcontrol->weight = 10;

  $export['recent_events_nodequeue'] = $fcontrol;
  return $export;
}
