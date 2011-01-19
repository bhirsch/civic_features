<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_twitterfeed_frontpage_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'New Twitter Feed';
  $fcontrol->name = 'create_twitter_feed';
  $fcontrol->path = 'node/add/twitter-feed';
  $fcontrol->query = '';
  $fcontrol->description = 'Add Twitter feed to automatically post tweets';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 60;

  $export['create_twitter_feed'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'Manage Twitter Feeds';
  $fcontrol->name = 'manage_twitter_feed';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=twitter_feed';
  $fcontrol->description = 'Edit/delete Twitter feed(s)';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 61;

  $export['manage_twitter_feed'] = $fcontrol;
  return $export;
}
