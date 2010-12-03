<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function whitehouseslideshow_frontpage_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'white-house-slideshow_front-page';
  $context->description = 'Blocks arrangements for front page.';
  $context->tag = 'Front Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_page_carousel-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_carousel-block_1',
          'region' => 'subheader',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks arrangements for front page.');
  t('Front Page');

  $export['white-house-slideshow_front-page'] = $context;
  return $export;
}
