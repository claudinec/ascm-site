<?php
/**
 * @file
 * ascm_events.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ascm_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ascm_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events to display on calendar/list.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
