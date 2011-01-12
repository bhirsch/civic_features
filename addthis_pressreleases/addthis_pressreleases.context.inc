<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function addthis_pressreleases_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add-this_press-releases';
  $context->description = 'AddThis block alongside press release posts and Press Releases listing';
  $context->tag = 'Press Releases';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'pressreleases_list' => 'pressreleases_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'addthis-0' => array(
          'module' => 'addthis',
          'delta' => 0,
          'region' => 'right',
          'weight' => 20,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AddThis block alongside press release posts and Press Releases listing');
  t('Press Releases');

  $export['add-this_press-releases'] = $context;
  return $export;
}
