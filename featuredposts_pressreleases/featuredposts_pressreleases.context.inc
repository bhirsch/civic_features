<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function featuredposts_pressreleases_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured-posts_press-releases';
  $context->description = 'Featured Posts block in right sidebar of Press Releases listing';
  $context->tag = 'Press Releases';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pressreleases_list' => 'pressreleases_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_posts-block' => array(
          'module' => 'views',
          'delta' => 'featured_posts-block',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Posts block in right sidebar of Press Releases listing');
  t('Press Releases');

  $export['featured-posts_press-releases'] = $context;
  return $export;
}
