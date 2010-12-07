<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function buttonblock_pressreleases_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'button-block_press-releases';
  $context->description = 'Button block alongside press release posts and Press Releases listing';
  $context->tag = 'Press Releases';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'pressreleases_list' => 'pressreleases_list',
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
  t('Button block alongside press release posts and Press Releases listing');
  t('Press Releases');

  $export['button-block_press-releases'] = $context;
  return $export;
}
