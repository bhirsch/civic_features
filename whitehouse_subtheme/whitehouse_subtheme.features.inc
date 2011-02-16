<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function whitehouse_subtheme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "subtheme" && $api == "default_subtheme_subtheme") {
    return array("version" => 1);
  }
}
