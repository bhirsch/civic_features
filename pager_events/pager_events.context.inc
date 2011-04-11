<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function pager_events_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_pager';
  $context->description = 'Display block to page through event posts';
  $context->tag = 'Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pagerblock-1' => array(
          'module' => 'pagerblock',
          'delta' => 1,
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display block to page through event posts');
  t('Events');

  $export['events_pager'] = $context;
  return $export;
}
