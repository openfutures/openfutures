<?php
/**
 * @file
 * library_blocks_and_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_blocks_and_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'openfutures_colophon';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer content';
  $box->options = array(
    'body' => array(
      'value' => 'The Open Futures Library is developed and hosted by the Services 2020 project of the Smart Services CRC in Australia. The content of the library is contributed and maintained by a global community of foresight practitioners, researchers, students and interested people just like you. The Library will always stay open and free for public use.',
      'format' => 'plain_text',
    ),
  );
  $export['openfutures_colophon'] = $box;

  return $export;
}
