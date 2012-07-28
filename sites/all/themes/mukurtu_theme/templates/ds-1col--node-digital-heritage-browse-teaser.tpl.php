<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<div class="ds-1col <?php print $classes;?> clearfix <?php print $ds_content_classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="field-header">
    <div class="comments-count">
      <?php print $comment_count; ?>
    </div>
  </div>
  <?php print $ds_content; ?>
</div>