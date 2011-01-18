<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_newsclips_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'News Clips';
  $fcontrol->title = 'Create News Clip';
  $fcontrol->name = 'create_news_clip';
  $fcontrol->path = 'clone_of_create_news_clips';
  $fcontrol->query = '';
  $fcontrol->description = 'Create news clips';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_news_clip'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'News Clips';
  $fcontrol->title = 'Manage News Clips';
  $fcontrol->name = 'manage_news_clips';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=news_clip';
  $fcontrol->description = 'Edit, publish, unpublish, delete news clips';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_news_clips'] = $fcontrol;
  return $export;
}
