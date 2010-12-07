<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function nav_newsclips_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'navigation_news-clips';
  $context->description = 'News clips navigation menu alongside news clips posts';
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
        'views-newsclips_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'newsclips_nav-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News clips navigation menu alongside news clips posts');

  $export['navigation_news-clips'] = $context;
  return $export;
}
