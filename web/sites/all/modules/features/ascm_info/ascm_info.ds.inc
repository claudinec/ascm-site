<?php
/**
 * @file
 * ascm_info.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ascm_info_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_attachments',
        3 => 'field_tags',
        4 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_attachments' => 'ds_content',
      'field_tags' => 'ds_content',
      'links' => 'ds_content',
    ),
  );
  $export['node|book|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_attachments',
        2 => 'field_tags',
        3 => 'comments',
        4 => 'book_navigation',
        5 => 'links',
        6 => 'field_access',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_attachments' => 'ds_content',
      'field_tags' => 'ds_content',
      'comments' => 'ds_content',
      'book_navigation' => 'ds_content',
      'links' => 'ds_content',
      'field_access' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|book|full'] = $ds_layout;

  return $export;
}
