<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($site_slogan): ?>
    <div class="branding-data clearfix">
      <?php if ($site_slogan): ?>
      <?php $class = $site_slogan_hidden ? ' element-invisible' : ''; ?>
      <div class="site-name-slogan<?php print $class; ?>">        
        <?php if ($site_slogan): ?>
        <?php $class = $site_slogan_hidden ? ' element-invisible' : ''; ?>
        <h6 class="site-slogan<?php print $class; ?>"><?php print $site_slogan; ?></h6>
        <?php endif; ?>
      </div>
      <?php endif; ?>
    </div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>