<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function buttonblock_newsclips_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'button-block_news-clips';
  $context->description = 'News Clips list page (path: /newsclips)';
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
        'newsclips_list' => 'newsclips_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-button_block-block_1' => array(
          'module' => 'views',
          'delta' => 'button_block-block_1',
          'region' => 'right',
          'weight' => 10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News Clips list page (path: /newsclips)');

  $export['button-block_news-clips'] = $context;
  return $export;
}
