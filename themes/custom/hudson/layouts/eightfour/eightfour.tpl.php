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
<div class="panel-display panel-eightfour clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <!-- begin two column row -->
  <div class="panel-panel panel-left">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel panel-right">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <!-- end two column row -->
</div>
