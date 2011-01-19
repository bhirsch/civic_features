<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_administration_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Content Management';
  $fcontrol->name = 'admin_content_manage';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = '';
  $fcontrol->description = 'Go to content management page. Filter, edit, delete, publish, and unpublish content.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manage content';
  $fcontrol->weight = 20;

  $export['admin_content_manage'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Contact Us Settings';
  $fcontrol->name = 'contact_settings';
  $fcontrol->path = 'admin/build/contact/settings';
  $fcontrol->query = '';
  $fcontrol->description = 'Configure the Contact Us form: Edit message above form, add email addresses and categories.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer site-wide contact form';
  $fcontrol->weight = 70;

  $export['contact_settings'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Control Panel';
  $fcontrol->name = 'control_panel';
  $fcontrol->path = 'admin/fcontrolpanel';
  $fcontrol->query = '';
  $fcontrol->description = 'Return to Control Panel';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 10;

  $export['control_panel'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Empty Cache';
  $fcontrol->name = 'empty_cache';
  $fcontrol->path = 'sws/clearcache';
  $fcontrol->query = '';
  $fcontrol->description = 'Clear website cache and go to Home page.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'clear cache';
  $fcontrol->weight = 30;

  $export['empty_cache'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Google Analytics';
  $fcontrol->name = 'google_analytics';
  $fcontrol->path = 'admin/settings/googleanalytics';
  $fcontrol->query = '';
  $fcontrol->description = 'Configure Google Analytics';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer google analytics';
  $fcontrol->weight = 40;

  $export['google_analytics'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Feature Management';
  $fcontrol->name = 'manage_features';
  $fcontrol->path = 'admin/build/features';
  $fcontrol->query = '';
  $fcontrol->description = 'Enable and disable website features';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manage features';
  $fcontrol->weight = 50;

  $export['manage_features'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Keywords and categories (taxonomy)';
  $fcontrol->name = 'manage_taxonomy';
  $fcontrol->path = 'admin/content/taxonomy_manager';
  $fcontrol->query = '';
  $fcontrol->description = 'Review, edit, merge and delete taxonomy terms.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer taxonomy';
  $fcontrol->weight = 60;

  $export['manage_taxonomy'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Users';
  $fcontrol->name = 'manage_users';
  $fcontrol->path = 'admin/user/user';
  $fcontrol->query = '';
  $fcontrol->description = 'Create new users. Edit usernames and passwords. Delete or block inactive users.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer users';
  $fcontrol->weight = 110;

  $export['manage_users'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Menus';
  $fcontrol->name = 'menu_settings';
  $fcontrol->path = 'admin/build/menu';
  $fcontrol->query = '';
  $fcontrol->description = 'Add, edit, and sort menu items.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer menu';
  $fcontrol->weight = 80;

  $export['menu_settings'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Site Maintenance';
  $fcontrol->name = 'site_maintenance';
  $fcontrol->path = 'admin/settings/site-maintenance';
  $fcontrol->query = '';
  $fcontrol->description = 'Turn website online/offline.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer site configuration';
  $fcontrol->weight = 90;

  $export['site_maintenance'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Administration';
  $fcontrol->title = 'Subtheme (Graphic Design)';
  $fcontrol->name = 'subtheme_build';
  $fcontrol->path = 'admin/subtheme';
  $fcontrol->query = '';
  $fcontrol->description = 'Customize graphic design';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manage subtheme';
  $fcontrol->weight = 100;

  $export['subtheme_build'] = $fcontrol;
  return $export;
}
