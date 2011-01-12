<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function upcomingevents_events_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'upcoming-events_events';
  $context->description = 'Upcoming Events block alongside event posts and events listing';
  $context->tag = 'Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'events_list' => 'events_list',
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
          'weight' => 40,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Upcoming Events block alongside event posts and events listing');

  $export['upcoming-events_events'] = $context;
  return $export;
}
