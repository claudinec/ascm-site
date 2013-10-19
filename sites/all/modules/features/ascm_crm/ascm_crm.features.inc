<?php
/**
 * @file
 * ascm_crm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ascm_crm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ascm_crm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ascm_crm_node_info() {
  $items = array(
    'individual' => array(
      'name' => t('Individual'),
      'base' => 'node_content',
      'description' => t('An individual person record.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => t('Organisation record type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
