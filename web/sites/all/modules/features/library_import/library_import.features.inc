<?php
/**
 * @file
 * library_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_import_node_info() {
  $items = array(
    'import_csv' => array(
      'name' => t('Import CSV'),
      'base' => 'node_content',
      'description' => t('Use <em>import</em> to create scenario content from a CSV file.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
