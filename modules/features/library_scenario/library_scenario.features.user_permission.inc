<?php
/**
 * @file
 * library_scenario.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function library_scenario_user_default_permissions() {
  $permissions = array();

  // Exported permission: create scenario content.
  $permissions['create scenario content'] = array(
    'name' => 'create scenario content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scenario content.
  $permissions['delete any scenario content'] = array(
    'name' => 'delete any scenario content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scenario content.
  $permissions['delete own scenario content'] = array(
    'name' => 'delete own scenario content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scenario content.
  $permissions['edit any scenario content'] = array(
    'name' => 'edit any scenario content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scenario content.
  $permissions['edit own scenario content'] = array(
    'name' => 'edit own scenario content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
