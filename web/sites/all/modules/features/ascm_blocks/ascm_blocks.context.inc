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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-contact_brief' => array(
          'module' => 'boxes',
          'delta' => 'contact_brief',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-social' => array(
          'module' => 'boxes',
          'delta' => 'social',
          'region' => 'sidebar_second',
          'weight' => '-8',
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
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
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
        'boxes-postal_address' => array(
          'module' => 'boxes',
          'delta' => 'postal_address',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-contact_header' => array(
          'module' => 'boxes',
          'delta' => 'contact_header',
          'region' => 'content',
          'weight' => '-9',
        ),
        'mailchimp_signup-subscribe' => array(
          'module' => 'mailchimp_signup',
          'delta' => 'subscribe',
          'region' => 'footer',
          'weight' => '-10',
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
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event-blocks';
  $context->description = 'Display event block everywhere except admin or events pages.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin/*' => '~admin/*',
        '~events' => '~events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display event block everywhere except admin or events pages.');
  t('blocks');
  $export['event-blocks'] = $context;

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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailchimp_signup-subscribe' => array(
          'module' => 'mailchimp_signup',
          'delta' => 'subscribe',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on front page');
  t('blocks');
  $export['front-blocks'] = $context;

  return $export;
}
