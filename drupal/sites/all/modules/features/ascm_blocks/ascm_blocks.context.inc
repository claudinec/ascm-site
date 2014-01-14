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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on Contact form');
  t('blocks');
  $export['contact-blocks'] = $context;

  return $export;
}
