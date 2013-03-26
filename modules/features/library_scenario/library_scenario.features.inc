<?php
/**
 * @file
 * library_scenario.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_scenario_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
