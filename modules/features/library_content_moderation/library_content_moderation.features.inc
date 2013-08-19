<?php
/**
 * @file
 * library_content_moderation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_content_moderation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function library_content_moderation_flag_default_flags() {
  $flags = array();
  // Exported flag: "Mark as abusive".
  $flags['mark_as_abusive'] = array(
    'entity_type' => 'node',
    'title' => 'Mark as abusive',
    'global' => 0,
    'types' => array(
      0 => 'scenario',
    ),
    'errors' => array(),
    'flag_short' => 'Mark as abusive',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Mark as abusive',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'library_content_moderation',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Mark as duplicate".
  $flags['mark_as_duplicate'] = array(
    'entity_type' => 'node',
    'title' => 'Mark as duplicate',
    'global' => 1,
    'types' => array(
      0 => 'scenario',
    ),
    'errors' => array(),
    'flag_short' => 'Mark as duplicate',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark as duplicate',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'library_content_moderation',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Mark as inaccurate".
  $flags['mark_as_inaccurate'] = array(
    'entity_type' => 'node',
    'title' => 'Mark as inaccurate',
    'global' => 0,
    'types' => array(
      0 => 'scenario',
    ),
    'errors' => array(),
    'flag_short' => 'Mark as inaccurate',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark as inaccurate',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'library_content_moderation',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
