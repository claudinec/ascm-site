<?php
/**
 * @file
 * ascm_blocks.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ascm_blocks_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-other-organisations_australian-young-christian-workers:http://ycw.org.au/.
  $menu_links['menu-other-organisations_australian-young-christian-workers:http://ycw.org.au/'] = array(
    'menu_name' => 'menu-other-organisations',
    'link_path' => 'http://ycw.org.au/',
    'router_path' => '',
    'link_title' => 'Australian Young Christian Workers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-other-organisations_australian-young-christian-workers:http://ycw.org.au/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-other-organisations_world-student-christian-federation:http://www.wscfglobal.org/.
  $menu_links['menu-other-organisations_world-student-christian-federation:http://www.wscfglobal.org/'] = array(
    'menu_name' => 'menu-other-organisations',
    'link_path' => 'http://www.wscfglobal.org/',
    'router_path' => '',
    'link_title' => 'World Student Christian Federation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-other-organisations_world-student-christian-federation:http://www.wscfglobal.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-other-organisations_wscf-asia-pacific-region:http://wscfap.org/.
  $menu_links['menu-other-organisations_wscf-asia-pacific-region:http://wscfap.org/'] = array(
    'menu_name' => 'menu-other-organisations',
    'link_path' => 'http://wscfap.org/',
    'router_path' => '',
    'link_title' => 'WSCF Asia-Pacific Region',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-other-organisations_wscf-asia-pacific-region:http://wscfap.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Australian Young Christian Workers');
  t('WSCF Asia-Pacific Region');
  t('World Student Christian Federation');

  return $menu_links;
}
