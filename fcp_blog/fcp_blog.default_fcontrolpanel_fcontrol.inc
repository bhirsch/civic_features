<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_blog_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Blog';
  $fcontrol->title = 'Create New Blog Post';
  $fcontrol->name = 'create_blog';
  $fcontrol->path = 'node/add/blog';
  $fcontrol->query = '';
  $fcontrol->description = 'Create a new blog post';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_blog'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Blog';
  $fcontrol->title = 'Manage Blog Posts';
  $fcontrol->name = 'manage_blog_posts';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=blog';
  $fcontrol->description = 'Edit, publish, unpublish, delete blog posts';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['manage_blog_posts'] = $fcontrol;
  return $export;
}
