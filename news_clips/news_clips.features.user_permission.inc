<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function news_clips_user_default_permissions() {
  $permissions = array();

  // Exported permission: create news_clip content
  $permissions['create news_clip content'] = array(
    'name' => 'create news_clip content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: create news_organization content
  $permissions['create news_organization content'] = array(
    'name' => 'create news_organization content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any news_clip content
  $permissions['delete any news_clip content'] = array(
    'name' => 'delete any news_clip content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any news_organization content
  $permissions['delete any news_organization content'] = array(
    'name' => 'delete any news_organization content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own news_clip content
  $permissions['delete own news_clip content'] = array(
    'name' => 'delete own news_clip content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own news_organization content
  $permissions['delete own news_organization content'] = array(
    'name' => 'delete own news_organization content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any news_clip content
  $permissions['edit any news_clip content'] = array(
    'name' => 'edit any news_clip content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any news_organization content
  $permissions['edit any news_organization content'] = array(
    'name' => 'edit any news_organization content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own news_clip content
  $permissions['edit own news_clip content'] = array(
    'name' => 'edit own news_clip content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own news_organization content
  $permissions['edit own news_organization content'] = array(
    'name' => 'edit own news_organization content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
