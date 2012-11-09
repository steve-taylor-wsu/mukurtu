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
  echo $output;

  if(!empty($item['jsondata']) || $item['jsondata'] !== '') { ?>


    <div id="<?php echo $item['anchor'] ?>-list">
          <script type="text/template" id="<?php echo $item['anchor'] ?>Template">
            <ul class="list span12">
              <% _.each(mukurtu_frontpage.localData["<?php echo $item['anchor'] ?>"], function (item) { %> 

                <li class="span12">
                <% if (item.image !== null) { %>
                  <%= item.image %>
                <% } %>
                
                <%= item.title %>
                <%= item.description %>
                </li>
              <% }); %>
            </ul>
    </script>

    </div>


<?php
  }
   

  
}

?>