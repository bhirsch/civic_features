<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_resources_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Resources';
  $fcontrol->title = 'New Resource';
  $fcontrol->name = 'create_resource';
  $fcontrol->path = 'node/add/resource';
  $fcontrol->query = '';
  $fcontrol->description = 'New resources';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_resource'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Resources';
  $fcontrol->title = 'Manage Resources';
  $fcontrol->name = 'manage_resources';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=resource';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish resources.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_resources'] = $fcontrol;
  return $export;
}
