<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_webform_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Webforms';
  $fcontrol->title = 'New Webform';
  $fcontrol->name = 'create_webform';
  $fcontrol->path = 'node/add/webform';
  $fcontrol->query = '';
  $fcontrol->description = 'Create a new webform';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_webform'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Webforms';
  $fcontrol->title = 'Manage Webforms';
  $fcontrol->name = 'manage_webforms';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=webform';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish webforms.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 1;

  $export['manage_webforms'] = $fcontrol;
  return $export;
}
