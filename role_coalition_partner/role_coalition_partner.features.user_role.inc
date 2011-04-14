<?php

/**
 * Implementation of hook_user_default_roles().
 */
function role_coalition_partner_user_default_roles() {
  $roles = array();

  // Exported role: coalition partner
  $roles['coalition partner'] = array(
    'name' => 'coalition partner',
  );

  return $roles;
}
