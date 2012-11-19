var mukurtu_frontpage = {};
mukurtu_frontpage.localData = [];

(function($){
$(document).ready(function(){
/* 	var base_path = Drupal.settings.single_page.base_path; */

  $('.header a[href*=#]').bind('click', function (e) {

      var hash = $(this).attr('href');
      hash = hash.slice(hash.indexOf('#') + 1);

      var offset = $('#'+hash).offset().top - 140;
    
      $('html, body').animate({scrollTop: offset}, 500);
     
      window.location.hash = '#' + hash;
      return false;
  });

/* $('#navigation').scrollspy(); */


    
    // Adjust scrolling header height.
/*
    var totalHeaderHeight = $('body.page-frontpage-app #navigation').outerHeight(true) + $('body.page-frontpage-app .header-block').outerHeight(true) + $('body.page-frontpage-app .header-block img').outerHeight(true);

    console.log(totalHeaderHeight);
    //$('body.page-frontpage-app .header').height(totalHeaderHeight);
    $('body.page-frontpage-app').css('padding-top', totalHeaderHeight);
*/



});

mukurtu_frontpage.query = function(path,callback,anchor) {
  $.ajax({
    url: path,
    dataType: 'json',
    success: mukurtu_frontpage.storeData(anchor),
    error: function(error) { console.log("Query error! " + error); return false; }
  });
};


mukurtu_frontpage.storeData = function(anchor) {
  return function(data, textStatus) {
    mukurtu_frontpage.loadData(data, anchor);
    mukurtu_frontpage.displayData(anchor);
  };
};

mukurtu_frontpage.loadData = function(data, anchor) {
  mukurtu_frontpage.localData[anchor] = data;
};

mukurtu_frontpage.displayData = function(anchor) {
  var template = $("#" + anchor + "Template").html();    
  if(mukurtu_frontpage.localData[anchor] !== undefined) {
    var anchor_items = anchor + '_items';
    $("#" + anchor + "-list").html(_.template(template,{items: mukurtu_frontpage.localData[anchor]}));
    
    $('.jcarousel').jcarousel({
/*       wrap: circular */
    });
  }
};

})(jQuery);



