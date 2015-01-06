<?php

/**
 * @file
 * Template.php - process theme data for your sub-theme.
 *
 * Rename each function and instance of "footheme" to match
 * your subthemes name, e.g. if you name your theme "footheme" then the function
 * name will be "footheme_preprocess_hook". Tip - you can search/replace
 * on "footheme".
 */


/**
 * Override or insert variables for the html template.
 */
/* -- Delete this line if you want to use this function
function footheme_preprocess_html(&$vars) {
}
function footheme_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function footheme_preprocess_page(&$vars) {
}
function footheme_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 *
 * From example at http://adaptivethemes.com/documentation/using-gpanels
 */
function ascm_theme_preprocess_node(&$vars) {
  // Setup variables to hold the regions blocks, so we can print them in node.tpl.php
  if ($blocks_two_33_66_top = block_get_blocks_by_region('two_33_66_top')) {
    $vars['two_33_66_top'] = $blocks_two_33_66_top;
    $vars['two_33_66_top']['#theme_wrappers'] = array('region');
    $vars['two_33_66_top']['#region'] = 'two_33_66_top';
  }
  else {
    $vars['two_33_66_top'] = '';
  }
  if ($blocks_two_33_66_first = block_get_blocks_by_region('two_33_66_first')) {
    $vars['two_33_66_first'] = $blocks_two_33_66_first;
    $vars['two_33_66_first']['#theme_wrappers'] = array('region');
    $vars['two_33_66_first']['#region'] = 'two_33_66_first';
  }
  else {
    $vars['two_33_66_first'] = '';
  }
  if ($blocks_two_33_66_second = block_get_blocks_by_region('two_33_66_second')) {
    $vars['two_33_66_second'] = $blocks_two_33_66_second;
    $vars['two_33_66_second']['#theme_wrappers'] = array('region');
    $vars['two_33_66_second']['#region'] = 'two_33_66_second';
  }
  else {
    $vars['two_33_66_second'] = '';
  }
  if ($blocks_two_33_66_bottom = block_get_blocks_by_region('two_33_66_bottom')) {
    $vars['two_33_66_bottom'] = $blocks_two_33_66_bottom;
    $vars['two_33_66_bottom']['#theme_wrappers'] = array('region');
    $vars['two_33_66_bottom']['#region'] = 'two_33_66_bottom';
  }
  else {
    $vars['two_33_66_bottom'] = '';
  }
}
// function ascm_theme_process_node(&$vars) {
// }


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function footheme_preprocess_comment(&$vars) {
}
function footheme_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function footheme_preprocess_block(&$vars) {
}
function footheme_process_block(&$vars) {
}
// */
