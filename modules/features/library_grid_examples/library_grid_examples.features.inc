<?php
/**
 * @file
 * library_grid_examples.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_grid_examples_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
