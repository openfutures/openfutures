<?php

/**
 * @file
 * Code for the discover page change mode buttons.
 */

/**
 * This plugin array is more or less self documenting.
 */
$plugin = array(
  'title' => t('Discover page mode switch'),
  'description' => t('Buttons which preserve views filters strings between modes.'),
  'single' => TRUE,
  'render callback' => 'discover_page_mode_render',
  // The default context.
  'defaults' => array(),
  'category' => array(t('Open Futures'), -9),
);

/**
 * Run-time rendering of the body of the block.
 */
function discover_page_mode_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  // The title actually used in rendering
  $block->title = check_plain('');
  $block->content = '';

  $get_query = drupal_get_query_parameters();
  $current_path = current_path();

  // if query has parameters we need to preserve the following:
  // search, subject, place, horizon, published
  if (!empty($get_query)) {
    $targets = array('search', 'subject', 'place', 'horizon', 'published');
    $query = array_intersect_key($get_query, array_flip($targets));
  } else {
    $query = NULL;
  }

  $block->content .= '<div class="display-mode"><ul>';

  $modes = array(
    'list' => array(
      'title' => 'List display mode',
      'path' => 'discover',
    ),
    'timeline' => array(
      'title' => 'Timeline display mode',
      'path' => 'discover/timeline',
    ),
    'map' => array(
      'title' => 'Map display mode',
      'path' => 'discover/map',
    ),
  );

  foreach ($modes as $name => $value) {
    $text = '<span class="label">' . $name . '</span>';
    $options = array(
      'query' => $query,
      'html' => TRUE,
      'attributes' => array(
        'title' => $value['title'],
        'class' => array('mode-' . $name),
      ),
    );
    $link = l($text, $value['path'], $options);
    $block->content .= '<li>' . $link . '</li>';
  }

  $block->content .= '</ul></div>';

  return $block;

}