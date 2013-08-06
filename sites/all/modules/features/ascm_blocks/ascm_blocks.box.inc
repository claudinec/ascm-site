<?php
/**
 * @file
 * ascm_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ascm_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'google_calendar';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Google Calendar embed code';
  $box->options = array(
    'body' => array(
      'value' => '<iframe src="https://www.google.com/calendar/embed?src=australianscm%40gmail.com&ctz=Australia/Sydney" style="border: 0" width="320" height="240" frameborder="0" scrolling="no"></iframe>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['google_calendar'] = $box;

  return $export;
}
