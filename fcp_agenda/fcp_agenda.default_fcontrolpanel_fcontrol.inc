<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_agenda_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Agenda';
  $fcontrol->title = 'New Agenda Item';
  $fcontrol->name = 'create_agenda_item';
  $fcontrol->path = 'node/add/agenda-item';
  $fcontrol->query = '';
  $fcontrol->description = 'Post a new agenda item';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = -1;

  $export['create_agenda_item'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Agenda';
  $fcontrol->title = 'Manage Agenda Items';
  $fcontrol->name = 'manage_agenda_items';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=agenda_item';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish agenda items.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 1;

  $export['manage_agenda_items'] = $fcontrol;
  return $export;
}
