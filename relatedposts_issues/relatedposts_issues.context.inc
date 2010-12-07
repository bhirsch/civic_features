<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function relatedposts_issues_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related-posts_issues';
  $context->description = 'Related posts alongside issue posts';
  $context->tag = 'Issues';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'issue' => 'issue',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'related_posts-0' => array(
          'module' => 'related_posts',
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
  t('Issues');
  t('Related posts alongside issue posts');

  $export['related-posts_issues'] = $context;
  return $export;
}
