<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function addthis_newsclips_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add-this_news-clips';
  $context->description = 'AddThis button alongside news clip posts and news clips listing page';
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
        'addthis-0' => array(
          'module' => 'addthis',
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
  t('AddThis button alongside news clip posts and news clips listing page');
  t('News');

  $export['add-this_news-clips'] = $context;
  return $export;
}
