<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function slideshow_panoramic_4_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'New Slide';
  $fcontrol->name = 'create_slide';
  $fcontrol->path = 'node/add/slide';
  $fcontrol->query = '';
  $fcontrol->description = 'Add a new slide to the front page slideshow';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 0;

  $export['create_slide'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Front Page';
  $fcontrol->title = 'Manage Slides';
  $fcontrol->name = 'manage_slides';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = 'type=slide';
  $fcontrol->description = 'Review, edit, delete, publish and unpublish slideshow slides';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 1;

  $export['manage_slides'] = $fcontrol;
  return $export;
}
