<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fcp_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "fcontrolpanel" && $api == "default_fcontrolpanel_fcontrol") {
    return array("version" => 1);
  }
}
