<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function legislation_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'legislation_list';
  $context->description = 'Legislation list page (path: /legislation)';
  $context->tag = 'Legislation';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'legislation_list' => 'legislation_list',
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
  t('Legislation');
  t('Legislation list page (path: /legislation)');

  $export['legislation_list'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'legislation_node';
  $context->description = 'Legislation pages (paths: /legislation/[node-title])';
  $context->tag = 'Legislation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'legislation' => 'legislation',
      ),
      'options' => array(
        'node_form' => 0,
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
  t('Legislation');
  t('Legislation pages (paths: /legislation/[node-title])');

  $export['legislation_node'] = $context;
  return $export;
}
