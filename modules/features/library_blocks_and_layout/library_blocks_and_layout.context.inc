<?php
/**
 * @file
 * library_blocks_and_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_blocks_and_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'Block layout for the footer region.';
  $context->tag = 'layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-openfutures_colophon' => array(
          'module' => 'boxes',
          'delta' => 'openfutures_colophon',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block layout for the footer region.');
  t('layout');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header';
  $context->description = 'Header block elements.';
  $context->tag = 'layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'header',
          'weight' => '-18',
        ),
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'header',
          'weight' => '-17',
        ),
        'blockify-blockify-site-slogan' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-slogan',
          'region' => 'header',
          'weight' => '-16',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-15',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-14',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header block elements.');
  t('layout');
  $export['header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_nested_false';
  $context->description = 'Context for when main is not a nested grid container.';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'main-nested-false',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for when main is not a nested grid container.');
  t('layout');
  $export['main_nested_false'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_prefix';
  $context->description = 'Site elements for main prefix region.';
  $context->tag = 'layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-breadcrumb' => array(
          'module' => 'blockify',
          'delta' => 'blockify-breadcrumb',
          'region' => 'main_prefix',
          'weight' => '-10',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'main_prefix',
          'weight' => '-9',
        ),
        'blockify-blockify-tabs' => array(
          'module' => 'blockify',
          'delta' => 'blockify-tabs',
          'region' => 'main_prefix',
          'weight' => '-8',
        ),
        'blockify-blockify-actions' => array(
          'module' => 'blockify',
          'delta' => 'blockify-actions',
          'region' => 'main_prefix',
          'weight' => '-7',
        ),
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'main_prefix',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site elements for main prefix region.');
  t('layout');
  $export['main_prefix'] = $context;

  return $export;
}
