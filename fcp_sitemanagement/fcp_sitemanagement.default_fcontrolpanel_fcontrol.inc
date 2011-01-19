<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_sitemanagement_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Management';
  $fcontrol->title = 'Manage Content';
  $fcontrol->name = 'old_admin_content_manage';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = '';
  $fcontrol->description = 'Go to content management page. Filter, edit, delete, publish, and unpublish content.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manage content';
  $fcontrol->weight = 1;

  $export['old_admin_content_manage'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Management';
  $fcontrol->title = 'Empty Cache';
  $fcontrol->name = 'old_empty_cache';
  $fcontrol->path = 'sws/clearcache';
  $fcontrol->query = '';
  $fcontrol->description = 'Clear website cache and go to Home page.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'clear cache';
  $fcontrol->weight = 4;

  $export['old_empty_cache'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Management';
  $fcontrol->title = 'Keywords and categories (taxonomy)';
  $fcontrol->name = 'old_manage_taxonomy';
  $fcontrol->path = 'admin/content/taxonomy_manager';
  $fcontrol->query = '';
  $fcontrol->description = 'Review, edit, merge and delete taxonomy terms.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer taxonomy';
  $fcontrol->weight = 3;

  $export['old_manage_taxonomy'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Management';
  $fcontrol->title = 'Manage Users';
  $fcontrol->name = 'old_manage_users';
  $fcontrol->path = 'admin/user/user';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new users. Edit usernames and passwords. Delete or block inactive users.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer users';
  $fcontrol->weight = 2;

  $export['old_manage_users'] = $fcontrol;
  return $export;
}
