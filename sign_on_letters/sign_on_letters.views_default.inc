<?php

/**
 * Implementation of hook_views_default_views().
 */
function sign_on_letters_views_default_views() {
  $views = array();

  // Exported view: signatories
  $view = new view;
  $view->name = 'signatories';
  $view->description = 'View/export sign-on signatories';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_signatory_fname_value' => array(
      'id' => 'field_signatory_fname_value',
      'table' => 'node_data_field_signatory_fname',
      'field' => 'field_signatory_fname_value',
    ),
    'field_signatory_lname_value' => array(
      'id' => 'field_signatory_lname_value',
      'table' => 'node_data_field_signatory_lname',
      'field' => 'field_signatory_lname_value',
    ),
    'field_signatory_title_value' => array(
      'id' => 'field_signatory_title_value',
      'table' => 'node_data_field_signatory_title',
      'field' => 'field_signatory_title_value',
    ),
    'field_signatory_organization_value' => array(
      'id' => 'field_signatory_organization_value',
      'table' => 'node_data_field_signatory_organization',
      'field' => 'field_signatory_organization_value',
    ),
    'field_signatory_org_city_value' => array(
      'id' => 'field_signatory_org_city_value',
      'table' => 'node_data_field_signatory_org_city',
      'field' => 'field_signatory_org_city_value',
    ),
    'field_signatory_org_state_value' => array(
      'id' => 'field_signatory_org_state_value',
      'table' => 'node_data_field_signatory_org_state',
      'field' => 'field_signatory_org_state_value',
    ),
    'field_signatory_org_addr_value' => array(
      'id' => 'field_signatory_org_addr_value',
      'table' => 'node_data_field_signatory_org_addr',
      'field' => 'field_signatory_org_addr_value',
    ),
    'field_signatory_phone_value' => array(
      'id' => 'field_signatory_phone_value',
      'table' => 'node_data_field_signatory_phone',
      'field' => 'field_signatory_phone_value',
    ),
    'field_signatory_email_value' => array(
      'id' => 'field_signatory_email_value',
      'table' => 'node_data_field_signatory_email',
      'field' => 'field_signatory_email_value',
    ),
  ));
  $handler->override_option('filters', array(
    'field_signatory_signon_letter_nid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_signatory_signon_letter_nid_op',
        'identifier' => 'sign-on-letter',
        'label' => 'Sign-on Letter:',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_signatory_signon_letter_nid',
      'table' => 'node_data_field_signatory_signon_letter',
      'field' => 'field_signatory_signon_letter_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'signatory' => 'signatory',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Signatories');
  $handler->override_option('header', '<div style="width:100%; text-align:right;">
<a href="/admin/content/manage/feed/signatories">Download data</a>
</div>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 100);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'field_signatory_fname_value' => 'field_signatory_fname_value',
      'field_signatory_lname_value' => 'field_signatory_lname_value',
      'field_signatory_title_value' => 'field_signatory_title_value',
      'field_signatory_organization_value' => 'field_signatory_organization_value',
      'field_signatory_org_city_value' => 'field_signatory_org_city_value',
      'field_signatory_org_state_value' => 'field_signatory_org_state_value',
      'field_signatory_org_addr_value' => 'field_signatory_org_addr_value',
      'field_signatory_phone_value' => 'field_signatory_phone_value',
      'field_signatory_email_value' => 'field_signatory_email_value',
    ),
    'info' => array(
      'field_signatory_fname_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_lname_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_title_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_organization_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_org_city_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_org_state_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_org_addr_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_phone_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_signatory_email_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page: Signatories', 'page_1');
  $handler->override_option('path', 'admin/content/manage/signatories');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('feed', 'Feed: Signatories', 'feed_1');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'views_csv');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
    'attach_text' => 'CSV',
    'provide_file' => 0,
    'filename' => 'view-%view.csv',
    'parent_sort' => 0,
    'seperator' => ',',
    'quote' => 1,
    'trim' => 0,
    'header' => 1,
  ));
  $handler->override_option('row_plugin', '');
  $handler->override_option('path', 'admin/content/manage/feed/signatories');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);

  $views[$view->name] = $view;

  return $views;
}
