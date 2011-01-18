<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_legislation_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Legislation';
  $fcontrol->title = 'Create New Legislation Post';
  $fcontrol->name = 'create_legislation';
  $fcontrol->path = 'node/add/legislation';
  $fcontrol->query = '';
  $fcontrol->description = 'New legislation post';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_legislation'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Legislation';
  $fcontrol->title = 'Manage Legislation';
  $fcontrol->name = 'manage_legislation';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=legislation';
  $fcontrol->description = 'Edit, publish, unpublish, delete legislatoin';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_legislation'] = $fcontrol;
  return $export;
}
