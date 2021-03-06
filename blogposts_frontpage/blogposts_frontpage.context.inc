<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function blogposts_frontpage_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog-posts--front_page';
  $context->description = 'Display recent blog posts in Blog blog, left sidebar (front page)';
  $context->tag = 'Front Page';
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
        'views-recent_blog_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_blog_posts-block_1',
          'region' => 'right',
          'weight' => 60,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display recent blog posts in Blog blog, left sidebar (front page)');
  t('Front Page');

  $export['blog-posts--front_page'] = $context;
  return $export;
}
