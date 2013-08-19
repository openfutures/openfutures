<?php
/**
 * @file
 * library_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function library_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create web_page content'.
  $permissions['create web_page content'] = array(
    'name' => 'create web_page content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any web_page content'.
  $permissions['delete any web_page content'] = array(
    'name' => 'delete any web_page content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own web_page content'.
  $permissions['delete own web_page content'] = array(
    'name' => 'delete own web_page content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any web_page content'.
  $permissions['edit any web_page content'] = array(
    'name' => 'edit any web_page content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own web_page content'.
  $permissions['edit own web_page content'] = array(
    'name' => 'edit own web_page content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
