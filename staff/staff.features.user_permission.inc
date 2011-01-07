<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: create bio content
  $permissions['create bio content'] = array(
    'name' => 'create bio content',
    'roles' => array(),
  );

  // Exported permission: delete any bio content
  $permissions['delete any bio content'] = array(
    'name' => 'delete any bio content',
    'roles' => array(),
  );

  // Exported permission: delete own bio content
  $permissions['delete own bio content'] = array(
    'name' => 'delete own bio content',
    'roles' => array(),
  );

  // Exported permission: edit any bio content
  $permissions['edit any bio content'] = array(
    'name' => 'edit any bio content',
    'roles' => array(),
  );

  // Exported permission: edit own bio content
  $permissions['edit own bio content'] = array(
    'name' => 'edit own bio content',
    'roles' => array(),
  );

  return $permissions;
}
