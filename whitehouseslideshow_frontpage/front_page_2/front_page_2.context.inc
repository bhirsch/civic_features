<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function front_page_2_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_2';
  $context->description = 'Blocks arrangements for front page.';
  $context->tag = 'Front Page 2 (Note: This is not a page node. It\'s really a view.)';
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
        'views-featured_posts-block' => array(
          'module' => 'views',
          'delta' => 'featured_posts-block',
          'region' => 'left',
          'weight' => 0,
        ),
        'views-button_block-block_1' => array(
          'module' => 'views',
          'delta' => 'button_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'addthis-0' => array(
          'module' => 'addthis',
          'delta' => 0,
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_video-block' => array(
          'module' => 'views',
          'delta' => 'featured_video-block',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-events_upcoming-block_1' => array(
          'module' => 'views',
          'delta' => 'events_upcoming-block_1',
          'region' => 'right',
          'weight' => 3,
        ),
        'views-front_page_slideshow_sm-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow_sm-block_1',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-twitter-block_1' => array(
          'module' => 'views',
          'delta' => 'twitter-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-recent_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_posts-block_1',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks arrangements for front page.');
  t('Front Page 2 (Note: This is not a page node. It\'s really a view.)');

  $export['front_page_2'] = $context;
  return $export;
}
