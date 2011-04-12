<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function recentposts_newsclips_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent-posts_news-clips';
  $context->description = 'Display a list of the sites most recent posts';
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
    'views' => array(
      'values' => array(
        'newsclips_list:page_1' => 'newsclips_list:page_1',
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
  t('News');

  $export['recent-posts_news-clips'] = $context;
  return $export;
}
