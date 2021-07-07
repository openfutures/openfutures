<?php
/**
 * @file
 * library_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function library_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'scenario_csv_import_beta1';
  $feeds_importer->config = array(
    'name' => 'Scenario CSV import beta1',
    'description' => 'A scenario import compatible with the 7.x-3.0-beta1 schema.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'source',
            'target' => 'field_scenario_source:value',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'time_horizon_start',
            'target' => 'field_scenario_time_horizon:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'time_horizon_end',
            'target' => 'field_scenario_time_horizon:end',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'focal_location',
            'target' => 'field_scenario_location',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'global_context',
            'target' => 'field_scenario_global',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'subject',
            'target' => 'field_scenario_subject',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'attachment',
            'target' => 'field_scenario_attachment',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'image',
            'target' => 'field_scenario_image',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'creator',
            'target' => 'field_scenario_creator',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'publisher',
            'target' => 'field_scenario_publisher',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'publish_date',
            'target' => 'field_scenario_date:start',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'type',
            'target' => 'field_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          14 => array(
            'source' => 'language',
            'target' => 'field_scenario_language',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'rights',
            'target' => 'field_scenario_rights',
            'term_search' => '0',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'scenario',
      ),
    ),
    'content_type' => 'import_csv',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['scenario_csv_import_beta1'] = $feeds_importer;

  return $export;
}
