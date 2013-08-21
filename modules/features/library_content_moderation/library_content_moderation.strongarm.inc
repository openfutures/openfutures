<?php
/**
 * @file
 * library_content_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_content_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__mark_as_abusive';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_flagging__mark_as_abusive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__mark_as_duplicate';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_flagging__mark_as_duplicate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__mark_as_inaccurate';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_flagging__mark_as_inaccurate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_abuse_flags';
  $strongarm->value = array(
    'mark_as_abusive' => 'mark_as_abusive',
    'mark_as_inaccurate' => 'mark_as_inaccurate',
    'mark_as_duplicate' => 'mark_as_duplicate',
    'abuse_user' => 'abuse_user',
  );
  $export['flag_abuse_flags'] = $strongarm;

  return $export;
}
