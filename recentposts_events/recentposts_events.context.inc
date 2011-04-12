<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function recentposts_events_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent-posts_events';
  $context->description = 'Display a list of the sites most recent posts';
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
    'views' => array(
      'values' => array(
        'events_list:page_1' => 'events_list:page_1',
        'events_past_list:page_3' => 'events_past_list:page_3',
        'events_upcoming_list:page_3' => 'events_upcoming_list:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_posts-block_1',
          'region' => 'right',
          'weight' => 80,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display a list of the sites most recent posts');
  t('Events');

  $export['recent-posts_events'] = $context;
  return $export;
}
