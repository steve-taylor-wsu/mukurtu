<?php
 
/**
 * PART 1. Basic Color module settings
 */

// http://mearra.com/comment/817 
$info = array();
 
// Define the possible replaceable items and their labels.
$info['fields'] = array(
 'highlight' => t('Highlight color'),
 'highlight_light' => t('Highlight Light color'),
 'greyscale_10' => t('Greyscale 100% - Darkest'),
 'greyscale_8' => t('Greyscale 80%'),
 'greyscale_7' => t('Greyscale 70%'),
 'greyscale_6' => t('Greyscale 60%'),
 'greyscale_5' => t('Greyscale 50%'),
 'greyscale_2' => t('Greyscale 20%'),
 'greyscale_1' => t('Greyscale 10%'),
 'greyscale_0' => t('Greyscale 0% - Lightest'),
 'colorscale_10' => t('Colorscale 100%'),
 'colorscale_8' => t('Colorscale 80%'),
 'colorscale_5' => t('Colorscale 50%'),
 'colorscale_3' => t('Colorscale 30%'),
 'colorscale_1' => t('Colorscale 10%'),
 'colorscale_0' => t('Colorscale 0% - Lightest'),
);

// Color schemes for the site.
$info['schemes'] = array(
 // Define the default scheme.
 'default' => array(
   // Scheme title.
   'title' => t('Mukurtu default colors'),
   // Scheme colors (Keys are coming from $info['fields']).
   'colors' => array(
     'highlight'        => '#FF8D47',
     'highlight_light'  => '#FEF1EC',
     'greyscale_10'     => '#000000',
     'greyscale_8'      => '#222222',
     'greyscale_7'      => '#575757',
     'greyscale_6'      => '#858585',
     'greyscale_5'      => '#DEDEDE',
     'greyscale_2'      => '#E3E6E6',
     'greyscale_1'      => '#F1F2F2',
     'greyscale_0'      => '#FFFFFF',
     'colorscale_10'    => '#506466',
     'colorscale_8'     => '#67787A',
     'colorscale_5'     => '#757F80',
     'colorscale_3'     => '#8D9899',
     'colorscale_1'     => '#C4CBCC',
     'colorscale_0'     => '#D1D8D9',
   ),
 ),
 // Let's create a scheme called Drupal Love.
 'mukurtu_default' => array(
   // Scheme title.
   'title' => t('Mukurtu Orange'),
   // Scheme colors (Keys are coming from $info['fields']).
   'colors' => array(
     'highlight'        => '#FF8D47',
     'highlight_light'  => '#FEF1EC',
     'greyscale_10'     => '#000000',
     'greyscale_8'      => '#222222',
     'greyscale_7'      => '#575757',
     'greyscale_6'      => '#858585',
     'greyscale_5'      => '#DEDEDE',
     'greyscale_2'      => '#E3E6E6',
     'greyscale_1'      => '#F1F2F2',
     'greyscale_0'      => '#FFFFFF',
     'colorscale_10'    => '#506466',
     'colorscale_8'     => '#67787A',
     'colorscale_5'     => '#757F80',
     'colorscale_3'     => '#8D9899',
     'colorscale_1'     => '#C4CBCC',
     'colorscale_0'     => '#D1D8D9',
   ),
 ),
);

// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array(
 'css/colors.css',
);

/***** Advanced Color settings - Defaults. Will be used in the Part 2. *****/
 
/**
 * Default settings for the advanced stuff.
 * No need to edit these if you just want to play around with the colors.
 * Color wants these, otherwise it's not going to play.
 *
 * We dive deeper into these in the Part 2. Advanced Color settings
 */
 
// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array();
 
// Files used in the scheme preview.
$info['preview_css'] = 'color/preview.css';
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.html';
 
// Gradients
$info['gradients'] = array();
 
// Color areas to fill (x, y, width, height).
$info['fill'] = array();
 
// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array();
 
// Base file for image generation.
$info['base_image'] = 'color/base.png';

/*
// Reference color used for blending. Matches the base.png's colors.
$info['blend_target'] = '#ffffff';

// Gradients.
$info['gradients'] = array(
  array(
    // Where to apply and with what dimension. (x, y, width, height).
    'dimension' => array(0, 0, 760, 100),
    // Direction of gradient ('vertical' or 'horizontal').
    'direction' => 'vertical',
    // Keys of colors to use for the gradient.
    'colors' => array('header_top', 'header_bottom'),
  ),
);

// Color areas to fill (x, y, width, height).
$info['fill'] = array(
  'bg' => array(0, 0, 760, 321),
  'menu_item_a_bg' => array(100, 250, 476, 42),
);

// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array(
  'images/header.png' => array(40, 0, 40, 125),
  'images/menu-item-active-left.png' => array(100, 250, 428, 42),
  'images/menu-item-active-right.png' => array(530, 250, 47, 42),
);
*/
/** Copying **/
 
// Files we want to copy along with the CSS files.
/*
$info['copy'] = array(
  'images/druplicon.png'
);
*/

// HTML file to be used in the preview window.
$info['preview_html'] = 'color/preview.html';

// CSS file to be used in the preview window.
$info['preview_css'] = 'color/preview.css';

// Javascript file to use in the preview window.
// This is the one that handles the color changes on the preview form when you're
// clicking on the color picker.
$info['preview_js'] = 'color/preview.js';