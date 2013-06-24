<?php
/**
 * @file
 * ascm_crm.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ascm_crm_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'individuals';
  $feeds_importer->config = array(
    'name' => 'Individuals',
    'description' => 'Individuals from CiviCRM',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Display Name',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'First Name',
            'target' => 'field_given_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Last Name',
            'target' => 'field_family_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Birth Date',
            'target' => 'field_date_of_birth:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Organization Name',
            'target' => 'field_address:organisation_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Street Address',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Postal Code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'individual',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['individuals'] = $feeds_importer;

  return $export;
}
