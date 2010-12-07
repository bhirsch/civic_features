<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function upcomingevents_frontpage_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'upcoming-events_front-page';
  $context->description = 'Blocks arrangements for front page.';
  $context->tag = 'Front Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events_upcoming-block_1' => array(
          'module' => 'views',
          'delta' => 'events_upcoming-block_1',
          'region' => 'right',
          'weight' => 10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks arrangements for front page.');
  t('Front Page');

  $export['upcoming-events_front-page'] = $context;
  return $export;
}
