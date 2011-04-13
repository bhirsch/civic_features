<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function whitehouse_mtheme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "mtheme" && $api == "default_mtheme_selector") {
    return array("version" => 1);
  }
}
