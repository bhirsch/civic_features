<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function owh_default_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor
  $permissions['access ckeditor'] = array(
    'name' => 'access ckeditor',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
