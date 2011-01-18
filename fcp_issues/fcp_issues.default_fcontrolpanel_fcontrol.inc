<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_issues_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Issues';
  $fcontrol->title = 'Create New Issue';
  $fcontrol->name = 'create_issue';
  $fcontrol->path = 'node/add/issue';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new issue';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = -1;

  $export['create_issue'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Issues';
  $fcontrol->title = 'Manage Issues';
  $fcontrol->name = 'manage_issues';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=issue';
  $fcontrol->description = 'Edit, publish, unpublish, delete issues';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_issues'] = $fcontrol;
  return $export;
}
