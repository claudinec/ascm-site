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

  // Exported menu link: main-menu_about-us:node/1944.
  $menu_links['main-menu_about-us:node/1944'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1944',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/1944',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/4848.
  $menu_links['main-menu_contact-us:node/4848'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4848',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:node/4848',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources:node/1970.
  $menu_links['main-menu_resources:node/1970'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1970',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:node/1970',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_staff-handbook:node/1993.
  $menu_links['main-menu_staff-handbook:node/1993'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1993',
    'router_path' => 'node/%',
    'link_title' => 'Staff handbook',
    'options' => array(
      'identifier' => 'main-menu_staff-handbook:node/1993',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:node/1970',
  );
  // Exported menu link: main-menu_support-ascm:node/4685.
  $menu_links['main-menu_support-ascm:node/4685'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4685',
    'router_path' => 'node/%',
    'link_title' => 'Support ASCM',
    'options' => array(
      'identifier' => 'main-menu_support-ascm:node/4685',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_update-your-details:node/1943.
  $menu_links['main-menu_update-your-details:node/1943'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1943',
    'router_path' => 'node/%',
    'link_title' => 'Update your details',
    'options' => array(
      'identifier' => 'main-menu_update-your-details:node/1943',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
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
  t('About us');
  t('Australian Young Christian Workers');
  t('Blog');
  t('Contact us');
  t('Home');
  t('Resources');
  t('Staff handbook');
  t('Support ASCM');
  t('Update your details');
  t('WSCF Asia-Pacific Region');
  t('World Student Christian Federation');

  return $menu_links;
}
