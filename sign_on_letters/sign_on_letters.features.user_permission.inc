<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function sign_on_letters_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sign_on_letter content
  $permissions['create sign_on_letter content'] = array(
    'name' => 'create sign_on_letter content',
    'roles' => array(),
  );

  // Exported permission: create signatory content
  $permissions['create signatory content'] = array(
    'name' => 'create signatory content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: delete any sign_on_letter content
  $permissions['delete any sign_on_letter content'] = array(
    'name' => 'delete any sign_on_letter content',
    'roles' => array(),
  );

  // Exported permission: delete any signatory content
  $permissions['delete any signatory content'] = array(
    'name' => 'delete any signatory content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own sign_on_letter content
  $permissions['delete own sign_on_letter content'] = array(
    'name' => 'delete own sign_on_letter content',
    'roles' => array(),
  );

  // Exported permission: delete own signatory content
  $permissions['delete own signatory content'] = array(
    'name' => 'delete own signatory content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any sign_on_letter content
  $permissions['edit any sign_on_letter content'] = array(
    'name' => 'edit any sign_on_letter content',
    'roles' => array(),
  );

  // Exported permission: edit any signatory content
  $permissions['edit any signatory content'] = array(
    'name' => 'edit any signatory content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own sign_on_letter content
  $permissions['edit own sign_on_letter content'] = array(
    'name' => 'edit own sign_on_letter content',
    'roles' => array(),
  );

  // Exported permission: edit own signatory content
  $permissions['edit own signatory content'] = array(
    'name' => 'edit own signatory content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
