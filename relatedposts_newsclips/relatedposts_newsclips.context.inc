<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function relatedposts_newsclips_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related-posts_news-clips';
  $context->description = 'Related Posts block alongside news clip posts and news clips listing page';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_clip' => 'news_clip',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'related_posts-0' => array(
          'module' => 'related_posts',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('Related Posts block alongside news clip posts and news clips listing page');

  $export['related-posts_news-clips'] = $context;
  return $export;
}
