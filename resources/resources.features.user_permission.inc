<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function resources_user_default_permissions() {
  $permissions = array();

  // Exported permission: create resource content
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(),
  );

  // Exported permission: delete any resource content
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(),
  );

  // Exported permission: delete own resource content
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any resource content
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own resource content
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
