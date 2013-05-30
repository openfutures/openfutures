<?php
/**
 * @file
 * library_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_import_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_import_node_info() {
  $items = array(
    'import_scenarios' => array(
      'name' => t('Import scenarios'),
      'base' => 'node_content',
      'description' => t('Use <em>import scenarios</em> to create scenario content from a CSV file.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
