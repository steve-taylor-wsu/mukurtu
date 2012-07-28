<?php
/**
 * @file
 * ma_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ma_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = 'select:visible[name="field_communities[und][]"], select:visible[name="field_culturalprotocol[und][]"]';
  $export['chosen_jquery_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum';
  $strongarm->value = '0';
  $export['chosen_minimum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_width';
  $strongarm->value = '200';
  $export['chosen_minimum_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '2';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings';
  $strongarm->value = array(
    'node' => array(
      'page' => array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => FALSE,
          ),
          'search_result' => array(
            'custom_settings' => FALSE,
          ),
          'browse_teaser' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '0',
            ),
          ),
          'display' => array(),
        ),
      ),
      'cultural_protocol_group' => array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => FALSE,
          ),
          'search_result' => array(
            'custom_settings' => FALSE,
          ),
          'browse_teaser' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '0',
            ),
          ),
          'display' => array(),
        ),
      ),
      'community' => array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'browse_teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => FALSE,
          ),
          'search_result' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '0',
            ),
          ),
          'display' => array(),
        ),
      ),
      'digital_heritage' => array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => TRUE,
          ),
          'search_result' => array(
            'custom_settings' => TRUE,
          ),
          'browse_teaser' => array(
            'custom_settings' => TRUE,
          ),
          'featured' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '4',
            ),
          ),
          'display' => array(),
        ),
      ),
    ),
    'file' => array(
      'default' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
          'full_content' => array(
            'custom_settings' => TRUE,
          ),
          'component_media_item' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'full_content' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'component_media_item' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
      'image' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
          'full_content' => array(
            'custom_settings' => TRUE,
          ),
          'component_media_item' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'file' => array(
              'weight' => '0',
            ),
          ),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'media_large' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'media_preview' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'full_content' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'component_media_item' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
      'audio' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
          'full_content' => array(
            'custom_settings' => TRUE,
          ),
          'component_media_item' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'full_content' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'component_media_item' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
      'video' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
          'full_content' => array(
            'custom_settings' => TRUE,
          ),
          'component_media_item' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'full_content' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'component_media_item' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
      'text' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
          'component_media_item' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
          'full_content' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'media_small' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'component_media_item' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'full_content' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
      'application' => array(
        'view_modes' => array(
          'media_link' => array(
            'custom_settings' => TRUE,
          ),
          'media_preview' => array(
            'custom_settings' => TRUE,
          ),
          'media_small' => array(
            'custom_settings' => TRUE,
          ),
          'media_large' => array(
            'custom_settings' => TRUE,
          ),
          'media_original' => array(
            'custom_settings' => TRUE,
          ),
          'component_media_item' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
          'full_content' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'default' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'component_media_item' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
              'full_content' => array(
                'weight' => '0',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
    ),
    'taxonomy_term' => array(
      'category' => array(
        'view_modes' => array(),
        'extra_fields' => array(
          'form' => array(
            'name' => array(
              'weight' => '0',
            ),
            'description' => array(
              'weight' => '1',
            ),
          ),
          'display' => array(),
        ),
      ),
    ),
    'user' => array(
      'user' => array(
        'view_modes' => array(),
        'extra_fields' => array(
          'form' => array(
            'account' => array(
              'weight' => '0',
            ),
            'timezone' => array(
              'weight' => '4',
            ),
            'contact' => array(
              'weight' => '2',
            ),
            'picture' => array(
              'weight' => '3',
            ),
            'overlay_control' => array(
              'weight' => '9',
            ),
            'wysiwyg' => array(
              'weight' => '8',
            ),
          ),
          'display' => array(),
        ),
      ),
    ),
  );
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
