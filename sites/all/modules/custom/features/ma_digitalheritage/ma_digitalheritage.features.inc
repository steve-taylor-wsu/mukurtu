<?php
/**
 * @file
 * ma_digitalheritage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ma_digitalheritage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ma_digitalheritage_node_info() {
  $items = array(
    'digital_heritage' => array(
      'name' => t('Digital Heritage'),
      'base' => 'node_content',
      'description' => t('Content & media items: images, movies, audio, documents'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('It\'s easy to create Digital Heritage content in Mukurtu. Just follow the steps designated by each tab: Mukurtu Core, Dublin Core, Traditional Knowledge and Licensing. '),
    ),
  );
  return $items;
}

/**
 * Implements hook_form_alter().
 *
 * WSU Plateau Peoples' Web Portal tribal knowledge relation field
 * Hide tribal knowledge relation field on node form
 */
function ma_digitalheritage_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == 'digital_heritage_node_form') {
    $form['field_tribal_knowledge_relation']['#access'] = FALSE;
  }
}

/**
 * Implements hook_node_presave().
 *
 * WSU Plateau Peoples' Web Portal tribal knowledge relation field
 * Setup tribal knowledge relation based on arg(3) id
 */
function ma_digitalheritage_node_presave($node) {
  if(!isset($node->nid) && arg(3) && is_numeric(arg(3))) {
    $node->field_tribal_knowledge_relation['und'][] = array('nid' => arg(3));
  }
}
