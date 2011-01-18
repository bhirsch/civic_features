<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_pages_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Page';
  $fcontrol->title = 'New Page';
  $fcontrol->name = 'create_page';
  $fcontrol->path = 'node/add/page';
  $fcontrol->query = '';
  $fcontrol->description = 'Create a new page';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_page'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Page';
  $fcontrol->title = 'Manage Pages';
  $fcontrol->name = 'manage_pages';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=page';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish pages.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_pages'] = $fcontrol;
  return $export;
}
