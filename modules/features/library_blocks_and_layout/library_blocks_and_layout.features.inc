<?php
/**
 * @file
 * library_blocks_and_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_blocks_and_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
