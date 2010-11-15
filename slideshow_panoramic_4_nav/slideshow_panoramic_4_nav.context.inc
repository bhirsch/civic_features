<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function slideshow_panoramic_4_nav_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow_panoramic_4_nav';
  $context->description = 'Panoramic photo only, with navigation buttons/links';
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
        'views-ba24ebdf9d541c06392292460390208b' => array(
          'module' => 'views',
          'delta' => 'ba24ebdf9d541c06392292460390208b',
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
  t('Panoramic photo only, with navigation buttons/links');

  $export['slideshow_panoramic_4_nav'] = $context;
  return $export;
}
