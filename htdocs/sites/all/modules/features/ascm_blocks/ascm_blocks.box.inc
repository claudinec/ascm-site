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
      'value' => '<p>PO Box 4386<br>MELBOURNE UNIVERSITY<br>VIC 3052</p><p><a href="/contact">Email us</a></p>',
      'format' => 'filtered_html',
    ),
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
      'value' => '<p>You can also contact us using the following form.</p><p>To updated your details on our contact database, please use the form on the <a href="/form/update-your-contact-details">\'Update your contact details\'</a> page.</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mailchimp_subscribe';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Mailchimp subscription form';
  $box->options = array(
    'body' => array(
      'value' => '<!-- Begin MailChimp Signup Form -->
<link href="//cdn-images.mailchimp.com/embedcode/slim-081711.css" rel="stylesheet" type="text/css">
<style type="text/css">#mc_embed_signup{background:#fbfbf6; clear:left; font:14px Helvetica,Arial,sans-serif; }
	/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
	   We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>
<div id="mc_embed_signup"><form action="http://ascm.us7.list-manage2.com/subscribe/post?u=ae2cbdec99e306d03a9160339&amp;id=bf6cbbd774" class="validate" id="mc-embedded-subscribe-form" method="post" name="mc-embedded-subscribe-form" novalidate="" target="_blank"><label for="mce-EMAIL">Subscribe to our mailing list</label> <input class="email" id="mce-EMAIL" name="EMAIL" placeholder="email address" required="" type="email" value=""> <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups--><div style="position: absolute; left: -5000px;"><input name="b_ae2cbdec99e306d03a9160339_bf6cbbd774" type="text" value=""></div><div class="clear"><input class="button" id="mc-embedded-subscribe" name="subscribe" type="submit" value="Subscribe"></div></form></div><!--End mc_embed_signup-->',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mailchimp_subscribe'] = $box;

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
<a href="https://www.facebook.com/AustralianStudentChristianMovement"><img src="sites/all/themes/ascm_theme/images/f_logo_32.png" alt="Facebook"></a>
<a href="https://twitter.com/australianscm"><img src="sites/all/themes/ascm_theme/images/bird_blue_32.png" alt="Twitter"></a>
<a href="https://instagram.com/australianscm"><img src="sites/all/themes/ascm_theme/images/Instagram_Glyph_Logo_32.png" alt="Instagram">
</p>
',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['social'] = $box;

  return $export;
}
