<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function nav_issues_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'navigation_issues';
  $context->description = 'Issues navigation menu alongside issue posts';
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
        'views-issues_nav-block_1' => array(
          'module' => 'views',
          'delta' => 'issues_nav-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Issues');
  t('Issues navigation menu alongside issue posts');

  $export['navigation_issues'] = $context;
  return $export;
}
