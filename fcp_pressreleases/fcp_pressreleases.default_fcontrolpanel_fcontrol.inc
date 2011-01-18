<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_pressreleases_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Press Releases';
  $fcontrol->title = 'New Press Release';
  $fcontrol->name = 'create_press_release';
  $fcontrol->path = 'node/add/press-release';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new press release';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = -1;

  $export['create_press_release'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Press Releases';
  $fcontrol->title = 'Manage Press Releases';
  $fcontrol->name = 'manage_press_releases';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=press_release';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish press releases.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_press_releases'] = $fcontrol;
  return $export;
}
