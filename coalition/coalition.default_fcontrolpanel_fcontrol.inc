<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function coalition_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Coalition';
  $fcontrol->title = 'New Coalition Member';
  $fcontrol->name = 'create_coalition_member';
  $fcontrol->path = 'node/add/coalition-member';
  $fcontrol->query = '';
  $fcontrol->description = 'Add a new coalition member';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_coalition_member'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Coalition';
  $fcontrol->title = 'Manage Coalition Members';
  $fcontrol->name = 'manage_coalition_members';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=coalition_member';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish coalitin member posts';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_coalition_members'] = $fcontrol;
  return $export;
}
