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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-other-organisations.
  $menus['menu-other-organisations'] = array(
    'menu_name' => 'menu-other-organisations',
    'title' => 'Other organisations',
    'description' => 'Other SCMs and related organisations.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Other SCMs and related organisations.');
  t('Other organisations');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
