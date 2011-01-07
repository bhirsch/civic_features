<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function video_user_default_permissions() {
  $permissions = array();

  // Exported permission: create video content
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any video content
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own video content
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any video content
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own video content
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
