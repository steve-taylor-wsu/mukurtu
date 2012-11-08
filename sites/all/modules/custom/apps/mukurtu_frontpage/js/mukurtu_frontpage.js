(function($){
$(document).ready(function(){
	var base_path = Drupal.settings.single_page.base_path;



  $('a[href*=#]').click(function () {
      var hash = $(this).attr('href');
      hash = hash.slice(hash.indexOf('#') + 1);
      $.scrollTo(hash == 'top' ? 0 : 'a[name='+hash+']', 500);
      window.location.hash = '#' + hash;
      return false;
  });




});
})(jQuery);

