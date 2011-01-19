<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_createcontent_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'Button (or Widget)';
  $fcontrol->name = 'create_content_button';
  $fcontrol->path = 'node/add/button';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new website content';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create button content';
  $fcontrol->weight = 0;

  $export['create_content_button'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'Event';
  $fcontrol->name = 'create_content_event';
  $fcontrol->path = 'node/add/event';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new event';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create event content';
  $fcontrol->weight = 0;

  $export['create_content_event'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'Issue';
  $fcontrol->name = 'create_content_issue';
  $fcontrol->path = 'node/add/issue';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new issue';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create issue content';
  $fcontrol->weight = 0;

  $export['create_content_issue'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'News Clip';
  $fcontrol->name = 'create_content_news_clip';
  $fcontrol->path = 'node/add/news-clip';
  $fcontrol->query = '';
  $fcontrol->description = 'Create news clip';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create news_clip content';
  $fcontrol->weight = 0;

  $export['create_content_news_clip'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'News Organization';
  $fcontrol->name = 'create_content_news_organization';
  $fcontrol->path = 'node/add/news-organization';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new news organization';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create news_organization content';
  $fcontrol->weight = 0;

  $export['create_content_news_organization'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'Page';
  $fcontrol->name = 'create_content_page';
  $fcontrol->path = 'node/add/page';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new page';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create page content';
  $fcontrol->weight = 0;

  $export['create_content_page'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'Press Release';
  $fcontrol->name = 'create_content_press_release';
  $fcontrol->path = 'node/add/press-release';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new press release';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create press_release content';
  $fcontrol->weight = 0;

  $export['create_content_press_release'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Create Content';
  $fcontrol->title = 'Twitter Feed';
  $fcontrol->name = 'create_content_twitter_feed';
  $fcontrol->path = 'node/add/twitter-feed';
  $fcontrol->query = '';
  $fcontrol->description = 'Add Twitter feed to automatically post tweets';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create twitter_feed content';
  $fcontrol->weight = 0;

  $export['create_content_twitter_feed'] = $fcontrol;
  return $export;
}
