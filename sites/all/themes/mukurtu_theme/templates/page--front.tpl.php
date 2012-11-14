<?php drupal_set_title($site_name);?>
<div class="container-fluid main-content">
<div class="row header">
  <div class="logo span2">
    <?php echo '<img class="logo" src="' . $logo . '" />'; ?>
  </div>
  <div class="navigation">
    <ul class='item-list'>
    <?php foreach($frontpage['page_items']['sections'] as $item) {
      if($item['title'] != '') {
        echo '<li class="span2"><a href="#' . $item['anchor'] . '"><span class="link">' . $item['title'] . '</span>'
          . '<span class="detail">' . $item['detail'] .'</span></a></li>';
      }
    }
    ?>
    </ul>
  </div>
</div>
<?php
$count = 0;
foreach($frontpage['page_items']['sections'] as $item) {
  $output = '';

  if($item['display'] == TRUE) {
    $output .= t('<div class="frontpage-content row" id="' . $item['anchor'] . '">');
  
    $output .= t('<h2>' . $item['title'] . '</h2>' );
  
    if($count == count($frontpage['page_items']['sections']) - 1 ) {
      $output .= '<footer>';  
    }
    
    
    
    $output .= $item['content'];
    
    if(!empty($item['jsondata']) || $item['jsondata'] !== '') { 
    $output .=  '<div id="' . $item['anchor'] . '-list">
        <script type="text/template" id="' . $item['anchor'] . 'Template">
          <ul class="list jcarousel jcarousel-skin-default">
            <% _.each(mukurtu_frontpage.localData["' . $item['anchor'] .'"], function (item) { %> 
              <li class="item">
              <% if (item.image !== null) { %>
                <a href="<%= item.path %>"><%= item.image %></a>
              <% } %>
              <span class="content">
              <% if (item.title !== null) { %>
               <h4><%= item.title %></h4>
              <% } %>
              <% if (item.description !== null) { %>              
                <%= item.description %>
              <% } %>
              </span>
              </li>
            <% }); %>
          </ul>
      </script>
  
      </div>';
     } 
    
    if($count == count($frontpage['page_items']['sections']) - 1 ) {
      $output .= '</footer>';  
    }




    $output .= '</div>';

    echo $output;

  }
  $count++;
  
   } ?>
</div>