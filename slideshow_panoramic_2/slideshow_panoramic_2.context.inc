<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function slideshow_panoramic_2_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow_panoramic_2';
  $context->description = 'Panoramic photo with slide title and link (no body text)';
  $context->tag = 'Front Page (Note: This is not a page node. It\'s really a view.)';
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
        'views-slideshow_panoramic_2-block_2' => array(
          'module' => 'views',
          'delta' => 'slideshow_panoramic_2-block_2',
          'region' => 'subheader',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page (Note: This is not a page node. It\'s really a view.)');
  t('Panoramic photo with slide title and link (no body text)');

  $export['slideshow_panoramic_2'] = $context;
  return $export;
}
