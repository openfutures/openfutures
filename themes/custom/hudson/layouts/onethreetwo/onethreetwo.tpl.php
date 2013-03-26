<?php
/**
 * @file
 * Template for a 1/3/2 column panel layout.
 *
 * This template provides a multi-column panel display layout, with
 * different columns over 3 rows.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display panel-onethreetwo clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <!-- begin top rop -->
  <div class="panel-panel panel-top-row">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <!-- end top row -->

  <!-- begin three column row -->
  <div class="panel-panel panel-ternary-col1">
    <div class="inside"><?php print $content['col1']; ?></div>
  </div>

  <div class="panel-panel panel-ternary-col2">
    <div class="inside"><?php print $content['col2']; ?></div>
  </div>

  <div class="panel-panel panel-ternary-col3">
    <div class="inside"><?php print $content['col3']; ?></div>
  </div>
  <!-- end three column row -->

  <!-- begin two column row -->
  <div class="panel-panel panel-binary-left">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel panel-binary-right">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <!-- end two column row -->
</div>
