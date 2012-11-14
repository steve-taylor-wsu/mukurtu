var mukurtu_frontpage = {};
mukurtu_frontpage.localData = [];

(function($){
$(document).ready(function(){
/* 	var base_path = Drupal.settings.single_page.base_path; */



  $('a[href*=#]').click(function () {
      var hash = $(this).attr('href');
      hash = hash.slice(hash.indexOf('#') + 1);
      $.scrollTo(hash == 'top' ? 0 : 'a[name='+hash+']', 500);
      window.location.hash = '#' + hash;
      return false;
  });




});

mukurtu_frontpage.query = function(path,callback,anchor) {
  $.ajax({
    url: path,
    dataType: 'json',
    success: mukurtu_frontpage.storeData(anchor),
    error: function(error) { console.log("Core::query error! " + error); return false; }
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



