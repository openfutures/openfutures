<?php
/**
 * @file
 * library_scenario.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_scenario_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_scenario_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_scenario_node_info() {
  $items = array(
    'scenario' => array(
      'name' => t('Scenario'),
      'base' => 'node_content',
      'description' => t('Use <em>scenario</em> to add a new scenario to the library.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
