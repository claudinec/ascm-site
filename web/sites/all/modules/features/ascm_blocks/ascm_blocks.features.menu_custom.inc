<?php
/**
 * @file
 * ascm_blocks.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ascm_blocks_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-other-organisations.
  $menus['menu-other-organisations'] = array(
    'menu_name' => 'menu-other-organisations',
    'title' => 'Other organisations',
    'description' => 'Other SCMs and related organisations.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Other SCMs and related organisations.');
  t('Other organisations');


  return $menus;
}
