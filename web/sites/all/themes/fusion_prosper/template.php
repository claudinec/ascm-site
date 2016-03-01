<?php

/**
 * Template overrides.
 */

/**
 * Override or insert variables into the html template.
 */
function fusion_prosper_process_html(&$variables) {
  // Hook into color module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}
