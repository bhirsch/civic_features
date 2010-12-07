<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function staff_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bio_node';
  $context->description = 'Bio (staff) pages (paths: /staff/[node-title]';
  $context->tag = 'Bio';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'bio' => 'bio',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bio_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'bio_nav-block_1',
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
        'related_posts-0' => array(
          'module' => 'related_posts',
          'delta' => 0,
          'region' => 'right',
          'weight' => 2,
        ),
        'views-featured_posts-block' => array(
          'module' => 'views',
          'delta' => 'featured_posts-block',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bio');
  t('Bio (staff) pages (paths: /staff/[node-title]');

  $export['bio_node'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff_list';
  $context->description = 'Bio (staff) list page';
  $context->tag = 'Bio';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'bio_list' => 'bio_list',
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
          'weight' => 0,
        ),
        'addthis-0' => array(
          'module' => 'addthis',
          'delta' => 0,
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_posts-block' => array(
          'module' => 'views',
          'delta' => 'featured_posts-block',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bio');
  t('Bio (staff) list page');

  $export['staff_list'] = $context;
  return $export;
}
