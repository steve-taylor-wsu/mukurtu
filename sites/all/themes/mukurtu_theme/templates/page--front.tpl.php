<?php drupal_set_title($site_name);?>

<div class="logo">
  <?php echo '<img class="logo" src="' . $logo . '" />'; ?>
</div>
<div class="navigation">
  <?php echo $frontpage['menu']; ?>
</div>

<?php



foreach($frontpage['page_items']['sections'] as $item) {

  $output = '';
  $output .= t('<h3>' . $item['title'] . '</h3>' );
  $output .= t('<div class="frontpage-content" id="' . $item['anchor'] . '">' . $item['content'] . '</div>' );
  
  if(!empty($item['data'])) {
    $output .= $item['data'];
  }
   
  echo $output;
  
}

?>