<?php

/**
 * @file
 * ascm_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ascm_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_antispam:admin/config/spamprevention.
  $menu_links['management_antispam:admin/config/spamprevention'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/spamprevention',
    'router_path' => 'admin/config/spamprevention',
    'link_title' => 'AntiSpam',
    'options' => array(
      'attributes' => array(
        'title' => 'Use the anti-spam service to protect your site from spam.',
      ),
      'identifier' => 'management_antispam:admin/config/spamprevention',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_antispam:admin/config/spamprevention/antispam.
  $menu_links['management_antispam:admin/config/spamprevention/antispam'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/spamprevention/antispam',
    'router_path' => 'admin/config/spamprevention/antispam',
    'link_title' => 'AntiSpam',
    'options' => array(
      'attributes' => array(
        'title' => 'Use the anti-spam service to protect your site from spam.',
      ),
      'identifier' => 'management_antispam:admin/config/spamprevention/antispam',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_antispam:admin/config/spamprevention',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AntiSpam');

  return $menu_links;
}
