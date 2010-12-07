<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function buttonblock_issues_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'button-block_issues';
  $context->description = 'Button block alongside issue posts and issues listing page';
  $context->tag = 'Issues';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'issue' => 'issue',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'issues_list' => 'issues_list',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Button block alongside issue posts and issues listing page');
  t('Issues');

  $export['button-block_issues'] = $context;
  return $export;
}
