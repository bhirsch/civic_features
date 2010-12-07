<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function footer_navigation_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_nav';
  $context->description = '';
  $context->tag = 'Footer';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bio_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'bio_nav-block_1',
          'region' => 'footer_nav',
          'weight' => 0,
        ),
        'views-issues_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'issues_nav-block_1',
          'region' => 'footer_nav',
          'weight' => 1,
        ),
        'views-legislation_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'legislation_nav-block_1',
          'region' => 'footer_nav',
          'weight' => 2,
        ),
        'views-pressreleases_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'pressreleases_nav-block_1',
          'region' => 'footer_nav',
          'weight' => 3,
        ),
        'views-newsclips_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'newsclips_nav-block_1',
          'region' => 'footer_nav',
          'weight' => 4,
        ),
        'sws-0' => array(
          'module' => 'sws',
          'delta' => 0,
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');

  $export['footer_nav'] = $context;
  return $export;
}
