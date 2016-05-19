<?php
/**
 * @file
 * ascm_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ascm_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_brief';
  $box->plugin_key = 'simple';
  $box->title = 'Contact us';
  $box->description = 'Contact - brief info';
  $box->options = array(
    'body' => array(
      'value' => '<p>PO Box 4386<br>MELBOURNE UNIVERSITY<br>VIC 3052</p><p><a href="/contact">Email us</a></p><p><a href="https://gitreports.com/issue/claudinec/ascm-site">Website problem?</a></p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_brief'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact form header';
  $box->options = array(
    'body' => array(
      'value' => '<p>You can also contact us using the following form.</p><p>To updated your details on our contact database, please use the form on the <a href="/form/update-your-contact-details">\'Update your contact details\'</a> page.</p><p>If you\'ve found a problem with this website, please <a href="https://gitreports.com/issue/claudinec/ascm-site">submit a report</a>.</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'postal_address';
  $box->plugin_key = 'simple';
  $box->title = 'Our postal address';
  $box->description = 'Postal address';
  $box->options = array(
    'body' => array(
      'value' => '<p>PO Box 4386<br><span style="line-height: 1.4;">MELBOURNE UNIVERSITY<br>VIC 3052</span></p>',
      'format' => 'filtered_html',
    ),
  );
  $export['postal_address'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social links';
  $box->options = array(
    'body' => array(
      'value' => '<p>
<a href="https://www.facebook.com/AustralianStudentChristianMovement"><img src="/sites/all/themes/custom/ascm_bootstrap_theme/images/f_logo_32.png" alt="Facebook"></a> <a href="https://twitter.com/australianscm"><img src="/sites/all/themes/custom/ascm_bootstrap_theme/images/bird_blue_32.png" alt="Twitter"></a> <a href="https://instagram.com/australianscm"><img src="/sites/all/themes/custom/ascm_bootstrap_theme/images/Instagram_Glyph_Logo_32.png" alt="Instagram">
</p>
',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['social'] = $box;

  return $export;
}
