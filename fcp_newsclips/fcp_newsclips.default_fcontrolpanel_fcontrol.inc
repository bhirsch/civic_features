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
  $fcontrol->title = 'New News Clip';
  $fcontrol->name = 'create_news_clip';
  $fcontrol->path = 'node/add/news-clip';
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
  $fcontrol->title = 'New News Organization';
  $fcontrol->name = 'create_news_organization';
  $fcontrol->path = 'node/add/news-organization';
  $fcontrol->query = '';
  $fcontrol->description = 'Add new news organization.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 1;

  $export['create_news_organization'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'News Clips';
  $fcontrol->title = 'Manage News Clips';
  $fcontrol->name = 'manage_news_clips';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=news_clip';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish news clips.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 2;

  $export['manage_news_clips'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'News Clips';
  $fcontrol->title = 'Manage News Organizations';
  $fcontrol->name = 'manage_news_organizations';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=news_organization';
  $fcontrol->description = 'Review, edit, delete news organizations.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 3;

  $export['manage_news_organizations'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'News Clips';
  $fcontrol->title = 'News Clips Settings';
  $fcontrol->name = 'news_clips_settings';
  $fcontrol->path = 'admin/settings/news_clips';
  $fcontrol->query = '';
  $fcontrol->description = 'Create/edit a standard footer for all news clips.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 4;

  $export['news_clips_settings'] = $fcontrol;
  return $export;
}
