<?php
/**
 * @file
 * ascm_info.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ascm_info_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-book-body'
  $field_instances['node-book-body'] = array(
    'bundle' => 'book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Body',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-book-field_attachments'
  $field_instances['node-book-field_attachments'] = array(
    'bundle' => 'book',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Attachments',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Body');

  return $field_instances;
}
