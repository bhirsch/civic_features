<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function featured_video_fpm_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_video--front_page_m';
  $context->description = 'Featured Video block (Front page, middle column)';
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
        'views-featured_video-block' => array(
          'module' => 'views',
          'delta' => 'featured_video-block',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Video block (Front page, middle column)');
  t('Front Page');

  $export['featured_video--front_page_m'] = $context;
  return $export;
}
