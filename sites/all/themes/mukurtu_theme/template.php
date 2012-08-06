<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements hook_preprocess_html().
 */
function mukurtu_theme_preprocess_html(&$variables) {
  drupal_add_library('system', 'ui.tabs');
  drupal_add_library('system', 'ui.accordion');
}

/**
 * Implements hook_process_region().
 */
function mukurtu_theme_process_region(&$vars) {
  if (in_array($vars['elements']['#region'], array('branding_logo', 'branding_name', 'branding_slogan'))) {
    $theme = alpha_get_theme();

    switch ($vars['elements']['#region']) {
      case 'branding_logo':
      case 'branding_name':
      case 'branding_slogan':
        $vars['site_name'] = $theme->page['site_name'];
        $vars['linked_site_name'] = l($vars['site_name'], '<front>', array('attributes' => array('title' => t('Home')), 'html' => TRUE));
        $vars['site_slogan'] = $theme->page['site_slogan'];
        $vars['site_name_hidden'] = $theme->page['site_name_hidden'];
        $vars['site_slogan_hidden'] = $theme->page['site_slogan_hidden'];
        $vars['logo'] = $theme->page['logo'];
        $vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="' . check_plain($vars['site_name']) . '" id="logo" />' : '';
        $vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], '<front>', array('attributes' => array('rel' => 'home', 'title' => check_plain($vars['site_name'])), 'html' => TRUE)) : '';
        break;
    }
  }
}

/**
 * Override theming for LoginToboggan's logged in block.
 */
function mukurtu_theme_lt_loggedinblock($variables) {
  return l(t('My account'), 'user/' . $variables['account']->uid, array('attributes' => array('class' => array('my-account')))) .' / ' . l(t('Log out'), 'user/logout', array('attributes' => array('class' => array('logout'))));
}

/**
 * Preprocess links.
 */
function mukurtu_theme_preprocess_links(&$variables) {
  // Main menu.
  if (isset($variables['attributes']['id']) && $variables['attributes']['id'] == 'main-menu') {
    foreach ($variables['links'] as $key => $menu_item) {
      // Add + in front of all main menu items.
      if (isset($menu_item['attributes']['class']) && in_array('mukurtu-actions', $menu_item['attributes']['class'])) {
        $variables['links'][$key]['title'] = '+ ' . $menu_item['title'];
      }
    }
  }
}

/**
 * Override theme_field() for digital heritage nodes.
 *
 * Removes hardcoded colon after labels.
 */
function mukurtu_theme_field__digital_heritage($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

function mukurtu_theme_community_tags($variables) {
dpm("com tags");
  $tags = $variables['tags'];
  return '<div class="cloud">' . (count($tags) ? theme('tagadelic_weighted', array('terms' => $tags)) : t('None')) . '</div>';
}


/**
 * Override theme_field() for digital heritage nodes media fields.
 *
 * Adds an extra link to hang the image enlarge symbol on.
 */
function mukurtu_theme_field__field_media__digital_heritage($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>';
    if($variables['element']['#view_mode'] !== "full") {
      if($variables['element'][0]['#view_mode'] === "component_media_item") {
        $output .= '<a href="' . url($item['file']['#uri']['path']) . '">' . drupal_render($item) . '</a>';
      }
      else {
        $output .= '<a href="/node/' . $variables['element']['#object']->nid . '">' . drupal_render($item) . '</a>';
      }
    }
    else {
      $output .=  drupal_render($item);
    }

    if(!empty($item['file']['#uri'])) {
      $output .= '<a href="' . url($item['file']['#uri']['path']) . '" class="enlarge"></a></div>';
    }
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Override theme_views_bulk_operations_select_all().
 *
 * Add Omega CSS classes.
 */
function mukurtu_theme_views_bulk_operations_select_all($variables) {
  $view = $variables['view'];
  $enable_select_all_pages = $variables['enable_select_all_pages'];
  $form = array();

  if ($view->style_plugin instanceof views_plugin_style_table && empty($view->style_plugin->options['grouping'])) {
    if (!$enable_select_all_pages) {
      return '';
    }

    $wrapper_class = 'vbo-table-select-all-markup';
    $this_page_count = format_plural(count($view->result), '1 row', '@count rows');
    $this_page = t('Selected <strong>!row_count</strong> in this page.', array('!row_count' => $this_page_count));
    $all_pages_count = format_plural($view->total_rows, '1 row', '@count rows');
    $all_pages = t('Selected <strong>!row_count</strong> in this view.', array('!row_count' => $all_pages_count));

    $form['select_all_pages'] = array(
      '#type' => 'button',
      '#attributes' => array('class' => array('vbo-table-select-all-pages')),
      '#value' => t('Select all !row_count in this view.', array('!row_count' => $all_pages_count)),
      '#prefix' => '<span class="vbo-table-this-page">' . $this_page . ' &nbsp;',
      '#suffix' => '</span>',
    );
    $form['select_this_page'] = array(
      '#type' => 'button',
      '#attributes' => array('class' => array('vbo-table-select-this-page')),
      '#value' => t('Select only !row_count in this page.', array('!row_count' => $this_page_count)),
      '#prefix' => '<span class="vbo-table-all-pages" style="display: none">' . $all_pages . ' &nbsp;',
      '#suffix' => '</span>',
    );
  }
  else {
    $wrapper_class = 'vbo-select-all-markup';

    $form['select_all'] = array(
      '#type' => 'fieldset',
      '#attributes' => array('class' => array('vbo-fieldset-select-all')),
    );
    $form['select_all']['this_page'] = array(
      '#type' => 'checkbox',
      '#title' => t('Select all items on this page'),
      '#default_value' => '',
      '#id' => 'vbo-select-this-page',
      '#attributes' => array('class' => array('vbo-select-this-page')),
    );

    if ($enable_select_all_pages) {
      $form['select_all']['or'] = array(
        '#type' => 'markup',
        '#markup' => '<em>OR</em>',
      );
      $form['select_all']['all_pages'] = array(
        '#type' => 'checkbox',
        '#title' => t('Select all items on all pages'),
        '#default_value' => '',
        '#id' => 'vbo-select-all-pages',
        '#attributes' => array('class' => array('vbo-select-all-pages')),
      );
    }
  }

  $output = '<div class="grid-6 ' . $wrapper_class . '">';
  $output .= drupal_render($form);
  $output .= '</div>';

  return $output;
}

/**
 * Override theme_file_link().
 *
 * Remove hard coded extra link and title.
 */
function mukurtu_theme_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  return '<span class="file">' . $icon . '</span>';
}


/**
 * Field formatter for displaying a file as a large icon.
 */
function mukurtu_theme_media_formatter_large_icon($variables) {
  $file = $variables['file'];
  // @TODO there is a bug where the $variables['file'] is not set for non images.
  // This makes the interface not display an error.
  if($variables['file'] === null){
/*
    $icon_dir = media_variable_get('icon_base_directory') . '/' . media_variable_get('icon_set');

    $icon = file_icon_path($file, $icon_dir);
    dpm($icon);
*/
    $variables['path'] = "sites/all/modules/custom/mukurtu_custom/custom_media_icon_sets/default/application-octet-stream.png";
  }
  else {
   // $variables['path'] = $icon;  
  }
  // theme_image() requires the 'alt' attribute passed as its own variable.
  // @see http://drupal.org/node/999338
  if (!isset($variables['alt']) && isset($variables['attributes']['alt'])) {
    $variables['alt'] = $variables['attributes']['alt'];
  }
  return theme('image', $variables);
}

/**
 * Implements template_process_html().
 *
 * Override or insert variables into the page template for HTML output.
 */
function mukurtu_theme_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}
 
/*
 * Implements template_process_page().
 */
function mukurtu_theme_process_page(&$vars, $hook) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}
/*

function mukurtu_theme_form_system_theme_settings_alter(&$form, &$form_state) {
  mukurtu_theme_theme_settings_add_new_colors();
  return $form;
}

function mukurtu_theme_theme_settings_add_new_colors() {
  // Add in any new colors that are defined in default scheme
  // but are not defined in the saved palette values.
  // Supplements logic in color.module color_scheme_form().
  $theme = 'mukurtu_theme';
  $info = color_get_info($theme);
  $names = $info['fields'];
  $palette = color_get_palette($theme); //calls variable_get
  $default = color_get_palette($theme, TRUE);
  $new = array();
  if(isset($default)) {
    foreach ($default as $name => $value) {
      if (!isset($palette[$name]) && isset($names[$name])) {
        $palette[$name] = $default[$name];
        $new[] = $names[$name];
      }
    }
  }
  if (count($new)) {
    drupal_set_message(t('One or more new colors are now available: @colors',
      array('@colors' => implode(', ', $new))));
    variable_set('color_' . $theme . '_palette', $palette);
  }
}
*/