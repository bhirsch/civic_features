<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function agenda_user_default_permissions() {
  $permissions = array();

  // Exported permission: create agenda_item content
  $permissions['create agenda_item content'] = array(
    'name' => 'create agenda_item content',
    'roles' => array(),
  );

  // Exported permission: delete any agenda_item content
  $permissions['delete any agenda_item content'] = array(
    'name' => 'delete any agenda_item content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own agenda_item content
  $permissions['delete own agenda_item content'] = array(
    'name' => 'delete own agenda_item content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any agenda_item content
  $permissions['edit any agenda_item content'] = array(
    'name' => 'edit any agenda_item content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own agenda_item content
  $permissions['edit own agenda_item content'] = array(
    'name' => 'edit own agenda_item content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
