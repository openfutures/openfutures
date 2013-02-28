<?php
/**
 * @file
 * library_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_page_node_info() {
  $items = array(
    'web_page' => array(
      'name' => t('Web page'),
      'base' => 'node_content',
      'description' => t('Use <em>web pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
