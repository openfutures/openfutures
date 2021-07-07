<?php

/**
 * @file
 * Code for the discover page change mode buttons.
 */

/**
 * This plugin array is more or less self documenting.
 */
$plugin = array(
  'title' => t('Add scenario bookmarklet'),
  'description' => t('Link for easily adding content to the libary.'),
  'single' => TRUE,
  'render callback' => 'library_bookmarklet_render',
  // The default context.
  'defaults' => array(),
  'category' => array(t('Open Futures'), -9),
);

/**
 * Run-time rendering of the body of the block.
 */
function library_bookmarklet_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  // The title actually used in rendering
  $block->title = check_plain('');
  $block->content = '<a href=\'javascript:(function(){if(!($=window.jQuery)){script=document.createElement("script");script.src="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js";script.onload=a;document.body.appendChild(script)}else{a()}function a(){var e=document.title;var c=location.href;var b="";if(window.getSelection){b=window.getSelection().toString()}else{if(document.selection&&document.selection.type!="Control"){b=document.selection.createRange().text}}var d="' . $GLOBALS['base_url'] . '/node/add/scenario?edit[title]="+encodeURIComponent(e)+"&edit[field_scenario_source][und][0][value]="+encodeURIComponent(c)+"&edit[body][und][0][value]="+encodeURIComponent(b);window.open(d,"_blank","width=1024,height=600,status=yes,resizable=yes,scrollbars=yes")}})();\'>Add scenario</a>';

  return $block;

}