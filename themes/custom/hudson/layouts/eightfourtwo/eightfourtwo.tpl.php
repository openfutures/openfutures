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
<section class="panel-layout section eightfourtwo-side">
  <?php print $content['side']; ?>
</section>
<section class="panel-layout section eightfourtwo-main">
  <?php print $content['main']; ?>
</section>
<section class="panel-layout section eightfourtwo-left">
  <?php print $content['left']; ?>
</section>
<section class="panel-layout section eightfourtwo-right">
  <?php print $content['right']; ?>
</section>
<section class="panel-layout section eightfourtwo-bottom">
  <?php print $content['bottom']; ?>
</section>