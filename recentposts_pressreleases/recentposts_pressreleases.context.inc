<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function recentposts_pressreleases_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent-posts_press-releases';
  $context->description = 'Display a list of the sites most recent posts';
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
        'pressreleases_list:page_1' => 'pressreleases_list:page_1',
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
  t('Press Releases');

  $export['recent-posts_press-releases'] = $context;
  return $export;
}