<?php 
/**
 * @file press_releases.admin.inc
 *  Press Releases settings page.
 */

/**
 * Callback for admin/settings/press_releases.
 *
 * Form builder. 
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function press_releases_admin_settings() {
  // Press Release settings
  $form['pr'] = array(
    '#type' => 'fieldset',
    '#title' => 'Press Release Settings',
    //'#collapsible' => TRUE,
    //'#collapsed' => TRUE,
  );
  $form['pr']['press_releases_header'] = array( 
    '#type' => 'textfield',
    '#title' => t('Press Release Header'),
    '#description' => t('This will be displayed at the top '
                       .'of every press release. ' 
                       .'E.g. "The White House"'), 
    '#default_value' => variable_get('press_releases_header', variable_get('site_name', NULL)),
  ); 
  $form['pr']['press_releases_subhead'] = array( 
    '#type' => 'textfield',
    '#title' => t('Press Release Subhead'),
    '#description' => t('Displayed at the top '
                       .'of press releases below the header. ' 
                       .'E.g. "Office of the Press Secretary"'), 
    '#default_value' => variable_get('press_releases_subhead', NULL),
  ); 
  $form['pr']['press_releases_footer'] = array( 
    '#type' => 'textarea',
    '#title' => t('Press Release Footer'),
    '#description' => t('Displayed in the footer of every press release. '
                       .'For example, you might put something like: "'
                       .'Sonia Chang-Diaz is the state senator for '
                       .'Massachusetts Second Suffolk District. Her '
                       .'district includes Roxbury, Jamaica Plain, the '
                       .'South End, Chinatown, Back Bay, Mission Hill, '
                       .'Beacon Hill, Dorchester and Mattapan."'), 
    '#default_value' => variable_get('press_releases_footer', NULL),
  ); 

  return system_settings_form($form);
}
