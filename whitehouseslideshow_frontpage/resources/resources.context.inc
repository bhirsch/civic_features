<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function resources_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_node';
  $context->description = 'Resource pages';
  $context->tag = 'Resources';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-resources_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'resources_nav-block_1',
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
  t('Resource pages');
  t('Resources');

  $export['resource_node'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_list';
  $context->description = 'Resources list page';
  $context->tag = 'Resources';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'resources_list:page_1' => 'resources_list:page_1',
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
  t('Resources');
  t('Resources list page');

  $export['resources_list'] = $context;
  return $export;
}
