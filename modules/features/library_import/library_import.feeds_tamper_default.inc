<?php
/**
 * @file
 * library_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function library_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-source-make_urls_absolute';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'absolute_url';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Make URLs absolute';
  $export['scenario_csv_import-source-make_urls_absolute'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-subject-convert_case';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'subject';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert case';
  $export['scenario_csv_import-subject-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-subject-explode';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'subject';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['scenario_csv_import-subject-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-subject-trim';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'subject';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['scenario_csv_import-subject-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-subject-unique';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'subject';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Unique';
  $export['scenario_csv_import-subject-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-time_horizon_end-explode';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'time_horizon_end';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '1',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['scenario_csv_import-time_horizon_end-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-time_horizon_end-rewrite';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'time_horizon_end';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '01-01-[time_horizon_end]',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Rewrite';
  $export['scenario_csv_import-time_horizon_end-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-time_horizon_start-explode';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'time_horizon_start';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '1',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['scenario_csv_import-time_horizon_start-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'scenario_csv_import-time_horizon_start-rewrite';
  $feeds_tamper->importer = 'scenario_csv_import';
  $feeds_tamper->source = 'time_horizon_start';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '01-01-[time_horizon_start]',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Rewrite';
  $export['scenario_csv_import-time_horizon_start-rewrite'] = $feeds_tamper;

  return $export;
}
