// Handle the color changes and update the preview window.
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Background
     // $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());
 
      // Text
 /*
     $('#preview #preview-main h2, #preview .preview-content', form).css('color', $('#palette input[name="palette[text]"]', form).val());
 
      // Links
      $('#preview #preview-content a', form).css('color', $('#palette input[name="palette[link]"]', form).val());
 
      // Titles
      $('#preview h1, #preview h2', form).css('color', $('#palette input[name="palette[titles]"]', form).val());
 
      // Menu item link color
      $('#preview #preview-main-menu-links li a', form).css('color', $('#palette input[name="palette[menu_item_color]"]', form).val());
 
      // Menu item active link bg
      $('#preview #preview-main-menu-links li a.active', form).css('backgroundColor', $('#palette input[name="palette[menu_item_a_bg]"]', form).val());
 
      // Menu item active link color
      $('#preview #preview-main-menu-links li a.active', form).css('color', $('#palette input[name="palette[menu_item_a_color]"]', form).val());
 
      // CSS3 Gradients.
      var gradient_start = $('#palette input[name="palette[header_top]"]', form).val();
      var gradient_end = $('#palette input[name="palette[header_bottom]"]', form).val();
 
      $('#preview #preview-header', form).attr('style', "background-color: " + gradient_start + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_start + "), to(" + gradient_end + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_start + ", " + gradient_end + ");");
*/
    }
  };
})(jQuery);