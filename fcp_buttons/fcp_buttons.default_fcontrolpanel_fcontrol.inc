<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_buttons_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Buttons';
  $fcontrol->title = 'New Button (or widget)';
  $fcontrol->name = 'create_button';
  $fcontrol->path = 'node/add/button';
  $fcontrol->query = '';
  $fcontrol->description = 'Create a new button or widget';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_button'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Buttons';
  $fcontrol->title = 'Manage Buttons (and widgets)';
  $fcontrol->name = 'manage_buttons';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=button';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish buttons.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 1;

  $export['manage_buttons'] = $fcontrol;
  return $export;
}
