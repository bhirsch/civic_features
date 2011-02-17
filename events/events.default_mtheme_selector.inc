<?php

/**
 * Implementation of hook_default_mtheme_selector().
 */
function events_default_mtheme_selector() {
  $export = array();
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_events';
  $selector->title = 'Main Menu Item: Events';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#events';
  $selector->css_properties = 'width: 14%;
padding: 0;
margin-left: 0px;';
  $selector->weight = 0;

  $export['menu_item_events'] = $selector;
  return $export;
}
