var mukurtu = mukurtu || {};

(function ($) {

  $(document).ready(function() {

    if(!window.Modernizr.input.placeholder){
    	$('[placeholder]').focus(function() {
    	  var input = $(this);
    	  if (input.val() == input.attr('placeholder')) {
    		input.val('');
    		input.removeClass('placeholder');
    	  }
    	}).blur(function() {
    	  var input = $(this);
    	  if (input.val() == '' || input.val() == input.attr('placeholder')) {
    		input.addClass('placeholder');
    		input.val(input.attr('placeholder'));
    	  }
    	}).blur();
    	$('[placeholder]').parents('form').submit(function() {
    	  $(this).find('[placeholder]').each(function() {
    		var input = $(this);
    		if (input.val() == input.attr('placeholder')) {
    		  input.val('');
    		}
    	  })
    	});
    }


    // Theme adjustments.
    // Comments

    var numberComments = $("div#comments article").length;

    $("div#comments article").hide();
    $("div#comments form").hide();
    $("div#comments h2.comment-form").html(Drupal.t("Add a comment"));
    $("div#comments h2.title").first().prepend('<div class="comments-count">' + numberComments + '</div>');

    $("div#comments h2.title").click(function() {
      $("div#comments article").toggle("slow");
      $("div#comments form").toggle("slow");
    });


    // Resize Digital Heritage fields that are using Chosen to width: 100%.
    if ($('body.node-type-digital-heritage .chzn-drop').length > 0) {
      $('body.node-type-digital-heritage .chzn-drop').css('width', '100%');
      $('body.node-type-digital-heritage .chzn-container').css('width', '100%');
    }

    $("div.me-cannotplay").css("height", "4em");

    $("div.mejs-video").css("height", "auto");

    // Retheme browse interactions all browse related views.
    var browsePages = ['.view-ma-browse', '.view-my-collection' ];
    var editSubmit = ['#edit-submit-ma-browse', '#edit-submit-my-collection'];

    for (var i=0; i < browsePages.length; i++) {
      var browsePage = browsePages[i];
      
      // Create tabs for exposed filters on the Browse Archive page.
      // Remove the keyword search box.
      var keyword_search = $(browsePage + ' .views-exposed-widgets .views-widget-filter-keys input').detach();
      keyword_search.attr('size', '25');
      $(browsePage + ' .views-exposed-widgets .views-widget-filter-keys').remove();
  
      // Create the tab list.
      $(browsePage + ' .views-exposed-widgets > div')
        .first()
        .before('<ul id="browse-archive-tabs"></ul>');
  
      // Create the summary bar for the Browse Archive page.
      $('<div id="summary-bar"></div>').appendTo(browsePage + ' .views-exposed-widgets');
  
      // Get the tab labels.
      $(browsePage + ' .views-exposed-widgets > div > label').each(function () {
        // Clean up the labels by trimming spaces off the ends, converting spaces
        // to underscores, and changing to lowercase.
        var id = $(this)
          .html()
          .replace(/^\s+|\s+$/g, '')
          .replace(/ /g, "_")
          .toLowerCase();
  
        // Add the labels as list elements.
        $('<li></li>')
          .append('<a></a>')
          .children()
          .attr('href', '#' + id)
          .text($(this).html())
          .parent().
          appendTo('#browse-archive-tabs');
  
        // Change the ids the exposed filters to match the labels.
        $(this)
        .parent()
        .attr('id', id);
  
        // Add the label as a table header in the summary bar.
        $('<div class="summary-element"></div>')
          .append('<h3></h3>')
          .children('h3')
          .text($(this).html() + ':')
          .addClass(id + '-summary')
          .parent()
          .append('<ul class="' + id + '-summary"></ul>')
          .appendTo('#summary-bar');
      });
  
      // Move the apply and reset buttons.
      $('<div id="summary-buttons"></div>')
        .append($(browsePage + ' .views-exposed-widget #edit-reset'))
        .append($(browsePage + ' .views-exposed-widget #edit-submit-ma-browse'))
        .appendTo('#summary-bar');
      $(browsePage + ' #summary-bar').append('<div class="clearfix"></div>');
  
      // Construct the search by keyword in the correct location.
      $('<li class="keyword-search"></li>')
        .append(keyword_search)
        .append($(browsePage + ' .views-exposed-widgets ' + editSubmit[i]).clone())
        .children(editSubmit[i])
        .removeAttr('id')
        .addClass('search-submit')
        .parent()
        .appendTo('#browse-archive-tabs');
  
      // Enable jQuery UI tabs.
      $(browsePage + ' .views-exposed-widgets').tabs();
  
      // Setup change function for checkboxes.
      $(browsePage + ' .views-exposed-widget.ui-tabs-panel input[type="checkbox"]').each(function() {
        $(this).change(function() {
          var widget_id = 'ul.' + $(this).parents('.views-exposed-widget').attr('id') + '-summary';
          var label = $(this).siblings('label').text();
          var li = $(browsePage + ' ' + widget_id + ' li').filter(function() {
            return $(this).html() == label;
          });
          if ($(this).not(':checked') && li.length > 0) {
            $(li).remove();
          } else {
            $('<li></li>').text(label).appendTo(widget_id);
          }
          mukurtu.checkboxAlphaSort($(widget_id), 'li');
        });
      });
  
      // Setup change function for exposed operators.
      $(browsePage + ' .views-exposed-widget.ui-tabs-panel .views-operator select').change(function() {
        var widget_id = 'ul.' + $(this).parents('.views-exposed-widget').attr('id') + '-summary';
        if ($(widget_id).find('li').length > 1 && $(widget_id).find('li').first().html() != $(this).val()) {
          $(widget_id).find('li').first().html($(this).find('option:selected').text());
        }
      });
  
      // Setup change function for text fieldsets.
      // Only to empty out the summary bar if the content of the autocomplete
      // is emptied.
      $(browsePage + ' .views-exposed-widget.ui-tabs-panel input[type="text"]').each(function() {
        $(this).change(function() {
          var widget_id = 'ul.' + $(this).parents('.views-exposed-widget').attr('id') + '-summary';
          if ($(widget_id).find('li').length > 1 && $(this).val() == "") {
            $(widget_id).find('li').remove();
          }
        });
      });
  
      // Setup alphabetical sort for summary bar checkboxes.
  
      // Add already selected checkbox filters to the summary bar.
      $(browsePage + ' .views-exposed-widget.ui-tabs-panel input[type="checkbox"]').each(function() {
        var widget_id = 'ul.' + $(this).parents('.views-exposed-widget').attr('id') + '-summary';
        if ($(this).is(':checked')) {
          var label = $(this).siblings('label').text();
          $('<li class="list-item"></li>').text(label).appendTo(widget_id);
        }
        mukurtu.checkboxAlphaSort($(widget_id), 'li');
      });
  
      // Add already selected text filters to the summary bar.
      $(browsePage + ' .views-exposed-widget.ui-tabs-panel input[type="text"]').each(function() {
        var widget_id = 'ul.' + $(this).parents('.views-exposed-widget').attr('id') + '-summary';
        if ($(this).val() != "") {
          $('<li></li>').text($(this).val()).appendTo(widget_id);
        }
        // Get any exposed operators.
        if ($(widget_id).children().length != 0) {
          var operator = $(this).parents('.views-exposed-widget').find('select option:selected').text();
          if (operator != "") {
            $('<li class="operator"></li>').text(operator).prependTo(widget_id);
          }
        }
      });
  

}


    // mukurtu.autocompleteSelect();


    // Split Browse Archive checkboxes into vertically alphabetized Omega columns.

    // For each exposed filter that has checkboxes.
    $('.views-widget .bef-select-as-checkboxes .bef-checkboxes').each(function() {
      mukurtu.checkboxColumns($(this));
    });

    // For each exposed filter that has checkboxes.
    $('.views-widget #edit-label').each(function() {
      mukurtu.checkboxColumns($(this));
    });


    /**
     * Set Digital Heritage sidebar to use accordian tabs.
     */
    $('body.page-node.node-type-digital-heritage .group-right .field-name-component-media-items h2')
      .insertBefore('body.page-node.node-type-digital-heritage .group-right .field-name-component-media-items');
    $('body.page-node.node-type-digital-heritage .group-right .field-name-field-relation .field-label')
      .insertBefore('body.page-node.node-type-digital-heritage .group-right .field-name-field-relation');
    $('body.page-node.node-type-digital-heritage .group-right')
      .accordion({ collapsible: true});
    $('body.page-node.node-type-digital-heritage .group-right .ui-accordion-content').removeAttr('style');

  });

  /**
   * Alphabetize elements.
   *
   * sort_container should be a jQuery object, like $(this) or $('ul')
   * sort_item should be a string, like '.form-item' or 'li'
   */
  mukurtu.checkboxAlphaSort = function(sort_container, sort_item) {
    var list_items = sort_container.children(sort_item).get();
    list_items.sort(function(a, b) {
       return $(a).text().toUpperCase().localeCompare($(b).text().toUpperCase());
    });
    $.each(list_items, function(index, item) {
      sort_container.append(item);
    });
  }

  mukurtu.checkboxColumns = function(object) {  
    var num_cols = 6;
    var object = object;
    
    // Sort the checkboxes before moving them into columns.
    mukurtu.checkboxAlphaSort(object, '.form-item');

    // Figure out how many elements should be in each column.
    var items_per_col = new Array();
    var items = object.find('.form-item');
    var min_items_per_col = Math.floor(items.length / num_cols);
    var difference = items.length - (min_items_per_col * num_cols);
    for (var i = 0; i < num_cols; i++) {
      if (i < difference) {
        items_per_col[i] = min_items_per_col + 1;
      } else {
        items_per_col[i] = min_items_per_col;
      }
    }

    // Assign the elements to the appropriate column.
    for (var i = 0; i < num_cols; i++) {
      object.append($('<ul class="checkbox-column grid-2"></ul>').addClass('checkbox-column grid-2'));
      for (var j = 0; j < items_per_col[i]; j++) {
        var pointer = 0;
        for (var k = 0; k < i; k++) {
          pointer += items_per_col[k];
        }
        object.find('.checkbox-column').last().append(items[j + pointer]);
      }
    }
  }
  /**
   * Overwrite Drupal.jsAC.prototype.hidePopup so that Browse Archive
   * summar bar can display results from autocompleted exposed filters.
   */
/*
  mukurtu.autocompleteSelect = function() {
    Drupal.jsAC.prototype.hidePopup = function (keycode) {
      // Select item if the right key or mousebutton was pressed.
      if (this.selected && ((keycode && keycode != 46 && keycode != 8 && keycode != 27) || !keycode)) {
        this.input.value = $(this.selected).data('autocompleteValue');

        // Custom Mukurtu: Append selection to summary bar.
        var widget_id = 'body.page-browse ul.' + $('#' + this.input.id).parents('.views-exposed-widget').attr('id') + '-summary';
        if (this.input.value != "") {
          if ($(widget_id).find('li').length < 1) {
            var operator = $('#' + this.input.id).parents('.views-exposed-widget').find('select option:selected').text();
            $('<li></li>').text(operator).prependTo(widget_id);
            $('<li></li>').text(this.input.value).appendTo(widget_id);
          } else {
            $(widget_id).find('li').last().html(this.input.value);
          }
        }
      }
      // Hide popup.
      var popup = this.popup;
      if (popup) {
        this.popup = null;
        $(popup).fadeOut('fast', function () { $(popup).remove(); });
      }
      this.selected = false;
      $(this.ariaLive).empty();
    };
  }
*/

})(jQuery);
