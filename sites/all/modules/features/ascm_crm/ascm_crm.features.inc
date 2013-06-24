<?php
/**
 * @file
 * ascm_crm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ascm_crm_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
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
  );
  return $items;
}
