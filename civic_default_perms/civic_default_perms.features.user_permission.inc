<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function civic_default_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: administer nodequeue
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
  );

  // Exported permission: administer site-wide contact form
  $permissions['administer site-wide contact form'] = array(
    'name' => 'administer site-wide contact form',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: administer subtheme
  $permissions['administer subtheme'] = array(
    'name' => 'administer subtheme',
    'roles' => array(),
  );

  // Exported permission: administer sws
  $permissions['administer sws'] = array(
    'name' => 'administer sws',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: assign all roles
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(),
  );

  // Exported permission: assign content manager role
  $permissions['assign content manager role'] = array(
    'name' => 'assign content manager role',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: assign site manager role
  $permissions['assign site manager role'] = array(
    'name' => 'assign site manager role',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: clear cache
  $permissions['clear cache'] = array(
    'name' => 'clear cache',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: create button content
  $permissions['create button content'] = array(
    'name' => 'create button content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: create coalition_member content
  $permissions['create coalition_member content'] = array(
    'name' => 'create coalition_member content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: create slide content
  $permissions['create slide content'] = array(
    'name' => 'create slide content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any button content
  $permissions['delete any button content'] = array(
    'name' => 'delete any button content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any coalition_member content
  $permissions['delete any coalition_member content'] = array(
    'name' => 'delete any coalition_member content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any news_contact content
  $permissions['delete any news_contact content'] = array(
    'name' => 'delete any news_contact content',
    'roles' => array(),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete any slide content
  $permissions['delete any slide content'] = array(
    'name' => 'delete any slide content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own button content
  $permissions['delete own button content'] = array(
    'name' => 'delete own button content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own coalition_member content
  $permissions['delete own coalition_member content'] = array(
    'name' => 'delete own coalition_member content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete own slide content
  $permissions['delete own slide content'] = array(
    'name' => 'delete own slide content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any button content
  $permissions['edit any button content'] = array(
    'name' => 'edit any button content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any coalition_member content
  $permissions['edit any coalition_member content'] = array(
    'name' => 'edit any coalition_member content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any news_contact content
  $permissions['edit any news_contact content'] = array(
    'name' => 'edit any news_contact content',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any slide content
  $permissions['edit any slide content'] = array(
    'name' => 'edit any slide content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own button content
  $permissions['edit own button content'] = array(
    'name' => 'edit own button content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own coalition_member content
  $permissions['edit own coalition_member content'] = array(
    'name' => 'edit own coalition_member content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own news_contact content
  $permissions['edit own news_contact content'] = array(
    'name' => 'edit own news_contact content',
    'roles' => array(),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit own slide content
  $permissions['edit own slide content'] = array(
    'name' => 'edit own slide content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: manage content
  $permissions['manage content'] = array(
    'name' => 'manage content',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: manage subtheme
  $permissions['manage subtheme'] = array(
    'name' => 'manage subtheme',
    'roles' => array(
      '0' => 'site manager',
    ),
  );

  // Exported permission: manipulate all queues
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: manipulate queues
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'content manager',
      '1' => 'site manager',
    ),
  );

  return $permissions;
}
