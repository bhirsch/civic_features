<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_sign_on_letters_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Sign-On Letters';
  $fcontrol->title = 'New Sign-On Letter';
  $fcontrol->name = 'create_sign_on_letter';
  $fcontrol->path = 'node/add/sign-on-letter';
  $fcontrol->query = '';
  $fcontrol->description = 'Create a new sign-on letter';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'create sign_on_letter content';
  $fcontrol->weight = 0;

  $export['create_sign_on_letter'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Sign-On Letters';
  $fcontrol->title = 'Export Signatories';
  $fcontrol->name = 'export_signatories';
  $fcontrol->path = 'admin/content/manage/signatories';
  $fcontrol->query = '';
  $fcontrol->description = 'Reveiw and export signatory data (contact info for people who have signed sign-on letters)';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer sws';
  $fcontrol->weight = 0;

  $export['export_signatories'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Sign-On Letters';
  $fcontrol->title = 'Manage Sign-On Letters';
  $fcontrol->name = 'manage_sign_on_letters';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=sign_on_letter';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish sign-on letters';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer sws';
  $fcontrol->weight = 0;

  $export['manage_sign_on_letters'] = $fcontrol;
  return $export;
}
