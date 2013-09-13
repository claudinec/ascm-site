<?php
/**
 * @file
 * ascm_info.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ascm_info_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1944
  $menu_links['main-menu:node/1944'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1944',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:node/1990
  $menu_links['main-menu:node/1990'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1990',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Resources');


  return $menu_links;
}
