<?php

/**
 * @file
 * ascm_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ascm_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all-blocks';
  $context->description = 'Blocks to display on all pages.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin' => '~admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-contact_brief' => array(
          'delta' => 'contact_brief',
          'module' => 'boxes',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-social' => array(
          'delta' => 'social',
          'module' => 'boxes',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'search-form' => array(
          'delta' => 'form',
          'module' => 'search',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on all pages.');
  t('blocks');
  $export['all-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book-blocks';
  $context->description = 'Blocks to display on book pages.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'node' => array(
      'options' => array(
        'node_form' => '0',
      ),
      'values' => array(
        'book' => 'book',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'delta' => 'navigation',
          'module' => 'book',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on book pages.');
  t('blocks');
  $export['book-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'civicrm-regions';
  $context->description = 'Hide right sidebar on CiviCRM pages.';
  $context->tag = 'regions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'civicrm*' => 'civicrm*',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'ascm_bootstrap_theme' => array(
        'disable' => array(
          'content' => 0,
          'dashboard_inactive' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'footer' => 0,
          'header' => 0,
          'help' => 0,
          'highlighted' => 0,
          'navigation' => 0,
          'page_bottom' => 0,
          'page_top' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 'sidebar_second',
        ),
      ),
      'bartik' => array(
        'disable' => array(
          'content' => 0,
          'dashboard_inactive' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'featured' => 0,
          'footer' => 0,
          'footer_firstcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'header' => 0,
          'help' => 0,
          'highlighted' => 0,
          'page_bottom' => 0,
          'page_top' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_last' => 0,
          'triptych_middle' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'dashboard_inactive' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'help' => 0,
          'page_bottom' => 0,
          'page_top' => 0,
          'sidebar_first' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hide right sidebar on CiviCRM pages.');
  t('regions');
  $export['civicrm-regions'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact-blocks';
  $context->description = 'Blocks to display on Contact form';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-contact_header' => array(
          'delta' => 'contact_header',
          'module' => 'boxes',
          'region' => 'content',
          'weight' => '-23',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on Contact form');
  t('blocks');
  $export['contact-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front-blocks';
  $context->description = 'Blocks to display on front page';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on front page');
  t('blocks');
  $export['front-blocks'] = $context;

  return $export;
}
