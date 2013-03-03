<?php
/**
 * @file
 * library_scenario.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_scenario_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scenario_source|node|scenario|form';
  $field_group->group_name = 'group_scenario_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scenario';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Source',
    'weight' => '4',
    'children' => array(
      0 => 'field_scenario_attachment',
      1 => 'field_scenario_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Source',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_scenario_source|node|scenario|form'] = $field_group;

  return $export;
}
