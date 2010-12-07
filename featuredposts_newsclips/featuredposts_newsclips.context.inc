<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function featuredposts_newsclips_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured-posts_news-clips';
  $context->description = 'Featured Posts block alongside news clip posts and news clips listing page';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_clip' => 'news_clip',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'newsclips_list' => 'newsclips_list',
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
  t('Featured Posts block alongside news clip posts and news clips listing page');
  t('News');

  $export['featured-posts_news-clips'] = $context;
  return $export;
}
