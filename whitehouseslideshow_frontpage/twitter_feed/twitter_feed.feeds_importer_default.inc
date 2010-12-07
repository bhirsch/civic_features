<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function twitter_feed_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'twitter_feed_import';
  $feeds_importer->config = array(
    'name' => 'Twitter Feed Import',
    'description' => 'Import tweets as nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tweet',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => TRUE,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => TRUE,
          ),
        ),
      ),
    ),
    'content_type' => 'twitter_feed',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['twitter_feed_import'] = $feeds_importer;
  return $export;
}
