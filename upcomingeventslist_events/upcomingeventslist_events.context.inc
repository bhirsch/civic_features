<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function upcomingeventslist_events_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_events';
  $context->description = 'Recent events posts alongside Upcoming Events and Past Events pages';
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
        'events_past_list:page_3' => 'events_past_list:page_3',
        'events_upcoming_list:page_3' => 'events_upcoming_list:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_events-block' => array(
          'module' => 'views',
          'delta' => 'recent_events-block',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Recent events posts alongside Upcoming Events and Past Events pages');

  $export['recent_events'] = $context;
  return $export;
}
