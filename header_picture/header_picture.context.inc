<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function header_picture_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'picture_header';
  $context->description = 'Display picture header above related posts';
  $context->tag = 'Site-wide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'header_picture-0' => array(
          'module' => 'header_picture',
          'delta' => 0,
          'region' => 'subheader2',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display picture header above related posts');
  t('Site-wide');

  $export['picture_header'] = $context;
  return $export;
}
