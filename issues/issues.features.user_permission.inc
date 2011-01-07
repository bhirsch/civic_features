<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function issues_user_default_permissions() {
  $permissions = array();

  // Exported permission: create issue content
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any issue content
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own issue content
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any issue content
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own issue content
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
