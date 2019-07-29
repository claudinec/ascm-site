<?php

/**
 * @file
 * ascm_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ascm_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_allow_pseudo_elements';
  $strongarm->value = 0;
  $export['fontawesome_allow_pseudo_elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_external';
  $strongarm->value = array(
    'use_cdn' => 1,
    'external_location' => 'https://kit.fontawesome.com/4e45ff27a6.js',
  );
  $export['fontawesome_external'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_method';
  $strongarm->value = 'svg';
  $export['fontawesome_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_partial';
  $strongarm->value = array(
    'use_solid_file' => 1,
    'use_regular_file' => 1,
    'use_light_file' => 1,
    'use_brands_file' => 1,
  );
  $export['fontawesome_partial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_shim';
  $strongarm->value = array(
    'use_shim' => 0,
    'external_location' => '',
  );
  $export['fontawesome_shim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_main-menu';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_main-menu'] = $strongarm;

  return $export;
}
