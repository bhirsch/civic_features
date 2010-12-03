<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function twocolslideshow_frontpage_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'two-col-slideshow_front-page';
  $context->description = 'Alternate front page slideshow (two columns wide, allows right sidebar to slide up flush with Main Menu)';
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
        'views-front_page_slideshow_sm-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow_sm-block_1',
          'region' => 'content_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternate front page slideshow (two columns wide, allows right sidebar to slide up flush with Main Menu)');
  t('Front Page');

  $export['two-col-slideshow_front-page'] = $context;
  return $export;
}
