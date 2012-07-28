// $Id$
(function ($) {
  Drupal.behaviors.initMukurtuSplash = {
    attach: function (context, settings) {
      $('.mukurtu-splash-link', context).click(function() {
        setTimeout($.colorbox.close, 2000);
      });
      // Set cookie that the user has already seen the prealpha message.
      document.cookie = 'prealpha_seen=1';
    }
  };
})(jQuery);
