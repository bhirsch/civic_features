<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function headerpic_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'picture_header';
  $context->description = 'Display picture header above related posts';
  $context->tag = 'Site-wide';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'headerpic-0' => array(
          'module' => 'headerpic',
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
