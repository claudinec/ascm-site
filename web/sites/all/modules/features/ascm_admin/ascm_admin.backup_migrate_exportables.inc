<?php

/**
 * @file
 * ascm_admin.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function ascm_admin_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'civicrm_profile';
  $item->name = 'CiviCRM Profile';
  $item->filename = '[site:name]-CiviCRM';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'ignore_errors' => 0,
    'notify_failure_email' => 'tech@ascm.org.au',
    'notify_failure_enable' => 1,
    'notify_success_email' => 'tech@ascm.org.au',
    'notify_success_enable' => 1,
    'sources' => array(
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
private://backup_migrate
sites/default/settings.php
/tmp',
      ),
      'civicrm' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(),
        'utils_lock_tables' => 0,
      ),
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'accesslog' => 'accesslog',
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
    ),
    'use_cli' => 0,
    'utils_description' => '',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'Australian Student Christian Movement is currently under maintenance. We should be back shortly. Thank you for your patience.',
  );
  $export['civicrm_profile'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'default';
  $item->name = 'Default Settings';
  $item->filename = '[site:url-brief]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'ignore_errors' => 0,
    'notify_failure_email' => 'tech@ascm.org.au',
    'notify_failure_enable' => 1,
    'notify_success_email' => 'tech@ascm.org.au',
    'notify_success_enable' => 1,
    'sources' => array(
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
private://backup_migrate
sites/default/settings.php
/tmp',
      ),
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'accesslog' => 'accesslog',
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
    ),
    'use_cli' => 0,
    'utils_description' => '',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'This website is currently under maintenance. We should be back shortly. Thank you for your patience.',
  );
  $export['default'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function ascm_admin_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'daily_civicrm';
  $item->name = 'Daily CiviCRM';
  $item->source_id = 'civicrm';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '';
  $item->profile_id = 'civicrm_profile';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['daily_civicrm'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'daily_schedule';
  $item->name = 'Daily Schedule';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '';
  $item->profile_id = 'default';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['daily_schedule'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'nodesquirrel';
  $item->name = 'NodeSquirrel';
  $item->source_id = 'db';
  $item->destination_id = 'nodesquirrel';
  $item->copy_destination_id = 'scheduled';
  $item->profile_id = 'default';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = FALSE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['nodesquirrel'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_sources().
 */
function ascm_admin_exportables_backup_migrate_sources() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'civicrm';
  $item->name = 'CiviCRM';
  $item->subtype = 'mysql';
  $item->location = 'mysql://ascmorga_civicrm:z0pD3MBBfxeg@localhost/ascmorga_civicrm';
  $item->settings = array();
  $export['civicrm'] = $item;

  return $export;
}
