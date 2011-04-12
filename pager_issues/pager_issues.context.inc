<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function pager_issues_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'issues_pager';
  $context->description = 'Display block to page through issues posts';
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
        'pagerblock-0' => array(
          'module' => 'pagerblock',
          'delta' => 0,
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display block to page through issues posts');
  t('Issues');

  $export['issues_pager'] = $context;
  return $export;
}
