<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function fcp_administration_user_default_permissions() {
  $permissions = array();

  // Exported permission: access features control panel
  $permissions['access features control panel'] = array(
    'name' => 'access features control panel',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
