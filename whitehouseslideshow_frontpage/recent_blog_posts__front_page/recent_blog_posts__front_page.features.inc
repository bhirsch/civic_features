<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function recent_blog_posts__front_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
