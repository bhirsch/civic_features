<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_staff_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Staff';
  $fcontrol->title = 'New Bio';
  $fcontrol->name = 'create_bio';
  $fcontrol->path = 'node/add/bio';
  $fcontrol->query = '';
  $fcontrol->description = 'New staff bio';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_bio'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Staff';
  $fcontrol->title = 'Manage Staff';
  $fcontrol->name = 'manage_staff';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=bio';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish staff bios.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_staff'] = $fcontrol;
  return $export;
}
