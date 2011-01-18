<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_video_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Video';
  $fcontrol->title = 'New Video';
  $fcontrol->name = 'create_video';
  $fcontrol->path = 'node/add/video';
  $fcontrol->query = '';
  $fcontrol->description = 'Post a new online YouTube, Vimeo, etc. video';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = -1;

  $export['create_video'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Video';
  $fcontrol->title = 'Manage Videos';
  $fcontrol->name = 'manage_videos';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=video';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish videos.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_videos'] = $fcontrol;
  return $export;
}
