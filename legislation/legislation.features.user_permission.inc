<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function legislation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create legislation content
  $permissions['create legislation content'] = array(
    'name' => 'create legislation content',
    'roles' => array(),
  );

  // Exported permission: delete any legislation content
  $permissions['delete any legislation content'] = array(
    'name' => 'delete any legislation content',
    'roles' => array(),
  );

  // Exported permission: delete own legislation content
  $permissions['delete own legislation content'] = array(
    'name' => 'delete own legislation content',
    'roles' => array(),
  );

  // Exported permission: edit any legislation content
  $permissions['edit any legislation content'] = array(
    'name' => 'edit any legislation content',
    'roles' => array(),
  );

  // Exported permission: edit own legislation content
  $permissions['edit own legislation content'] = array(
    'name' => 'edit own legislation content',
    'roles' => array(),
  );

  return $permissions;
}
