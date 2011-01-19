<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_myaccount_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'My Account';
  $fcontrol->title = 'Logout';
  $fcontrol->name = 'my_account_logout';
  $fcontrol->path = 'logout';
  $fcontrol->query = '';
  $fcontrol->description = 'Sign off website';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['my_account_logout'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'My Account';
  $fcontrol->title = 'Account Settings';
  $fcontrol->name = 'my_account_settings';
  $fcontrol->path = 'user/%user/edit';
  $fcontrol->query = '';
  $fcontrol->description = 'Edit username, password, etc.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['my_account_settings'] = $fcontrol;
  return $export;
}
