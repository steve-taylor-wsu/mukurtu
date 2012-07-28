<?php

/**
 * @file
 * Mukurtu Theme 3 column unbalanced template HTML 5 version.
 * Created specifically for the Digital Heritage node.
 */
?>
<div class="ds-3col-unbalanced-html5 <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="container-left">
    <?php if ($header): ?>
      <header class="group-header<?php print $header_classes; ?>">
        <?php print $header; ?>
      </header>
    <?php endif; ?>

    <?php if ($left): ?>
      <aside class="group-left<?php print $left_classes; ?>">
        <?php print $left; ?>
      </aside>
    <?php endif; ?>

    <?php if ($middle): ?>
      <section class="group-middle<?php print $middle_classes; ?>">
        <?php print $middle; ?>
      </section>
    <?php endif; ?>
  </div>

  <?php if ($right): ?>
    <aside class="group-right<?php print $right_classes; ?>">
      <?php print $right; ?>
    </aside>
  <?php endif; ?>

</div>