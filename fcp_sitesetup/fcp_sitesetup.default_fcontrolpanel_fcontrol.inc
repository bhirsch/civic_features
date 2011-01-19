<?php

/**
 * Implementation of hook_default_fcontrolpanel_fcontrol().
 */
function fcp_sitesetup_default_fcontrolpanel_fcontrol() {
  $export = array();
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Management';
  $fcontrol->title = 'Manage Content';
  $fcontrol->name = 'old_admin_content_manage';
  $fcontrol->path = 'admin/content/manage';
  $fcontrol->query = '';
  $fcontrol->description = 'Go to content management page. Filter, edit, delete, publish, and unpublish content.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manage content';
  $fcontrol->weight = 1;

  $export['old_admin_content_manage'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Set-Up';
  $fcontrol->title = 'Contact Us Settings';
  $fcontrol->name = 'old_contact_settings';
  $fcontrol->path = 'admin/build/contact/settings';
  $fcontrol->query = '';
  $fcontrol->description = 'Configure the Contact Us form: Edit message above form, add email addresses and categories.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer site-wide contact form';
  $fcontrol->weight = 4;

  $export['old_contact_settings'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Set-Up';
  $fcontrol->title = 'Google Analytics';
  $fcontrol->name = 'old_google_analytics';
  $fcontrol->path = 'admin/settings/googleanalytics';
  $fcontrol->query = '';
  $fcontrol->description = 'Configure Google Analytics';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer google analytics';
  $fcontrol->weight = 7;

  $export['old_google_analytics'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Set-Up';
  $fcontrol->title = 'Manage Features';
  $fcontrol->name = 'old_manage_features';
  $fcontrol->path = 'admin/build/features';
  $fcontrol->query = '';
  $fcontrol->description = 'Enable and disable website features';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'manage features';
  $fcontrol->weight = 6;

  $export['old_manage_features'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Set-Up';
  $fcontrol->title = 'Menus';
  $fcontrol->name = 'old_menu_settings';
  $fcontrol->path = 'admin/build/menu';
  $fcontrol->query = '';
  $fcontrol->description = 'Add, edit, and sort menu items.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer menu';
  $fcontrol->weight = 5;

  $export['old_menu_settings'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Set-Up';
  $fcontrol->title = 'News Clips Settings';
  $fcontrol->name = 'old_news_clips_settings';
  $fcontrol->path = 'admin/settings/news_clips';
  $fcontrol->query = '';
  $fcontrol->description = 'Create/edit a standard footer for all news clips.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 3;

  $export['old_news_clips_settings'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Press Releases';
  $fcontrol->title = 'Press Releases Settings';
  $fcontrol->name = 'old_press_releases_settings';
  $fcontrol->path = 'admin/settings/press_releases';
  $fcontrol->query = '';
  $fcontrol->description = 'Create/edit standard header, subheader and footer for all press releases.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = '';
  $fcontrol->weight = 3;

  $export['old_press_releases_settings'] = $fcontrol;
  $fcontrol = new stdClass;
  $fcontrol->disabled = FALSE; /* Edit this to true to make a default fcontrol disabled initially */
  $fcontrol->api_version = 1;
  $fcontrol->package = 'Site Set-Up';
  $fcontrol->title = 'Site Maintenance';
  $fcontrol->name = 'old_site_maintenance';
  $fcontrol->path = 'admin/settings/site-maintenance';
  $fcontrol->query = '';
  $fcontrol->description = 'Turn website online/offline.';
  $fcontrol->video_title = '';
  $fcontrol->video = '';
  $fcontrol->instructions_title = '';
  $fcontrol->instructions = '';
  $fcontrol->permission = 'administer site configuration';
  $fcontrol->weight = 1;

  $export['old_site_maintenance'] = $fcontrol;
  return $export;
}
