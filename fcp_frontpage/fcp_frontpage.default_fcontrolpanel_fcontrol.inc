<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_frontpage_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'Featured Posts Queue';
  $fcontrol->name = 'frontpage_featuredposts';
  $fcontrol->path = 'admin/content/nodequeue/2';
  $fcontrol->query = '';
  $fcontrol->description = 'Add posts to the Featured Posts queue.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 20;

  $export['frontpage_featuredposts'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'Featured Video Queue';
  $fcontrol->name = 'frontpage_featuredvideo';
  $fcontrol->path = 'admin/content/nodequeue/3';
  $fcontrol->query = '';
  $fcontrol->description = 'Add posts to the Featured Video queue.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 30;

  $export['frontpage_featuredvideo'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'Front Page Slideshow Queue';
  $fcontrol->name = 'frontpage_slideshow';
  $fcontrol->path = 'admin/content/nodequeue/1';
  $fcontrol->query = '';
  $fcontrol->description = 'Add posts/slides to the Front Page Slideshow queue.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 10;

  $export['frontpage_slideshow'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'Front Page Main Queue';
  $fcontrol->name = 'queue_front_page_main';
  $fcontrol->path = 'admin/content/nodequeue/4';
  $fcontrol->query = '';
  $fcontrol->description = 'Add posts to the Front Page Main queue.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 40;

  $export['queue_front_page_main'] = $fcontrol;
  return $export;
}
