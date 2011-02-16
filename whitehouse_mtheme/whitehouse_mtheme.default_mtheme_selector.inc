<?php

/**
 * Implementation of hook_default_mtheme_selector().
 */
function whitehouse_mtheme_default_mtheme_selector() {
  $export = array();
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'content';
  $selector->title = 'Content (three column layout)';
  $selector->grp = 'White House';
  $selector->description = '';
  $selector->css_selector = '#content';
  $selector->css_properties = 'float: left;
padding: 25px 25px 0 0;
width: 430px;';
  $selector->weight = 0;

  $export['content'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'content_wide';
  $selector->title = 'Wide content area (two column layout)';
  $selector->grp = 'White House';
  $selector->description = '';
  $selector->css_selector = '#content-wide';
  $selector->css_properties = 'float: left;
padding: 25px 25px 0 0;
width: 595px;
';
  $selector->weight = 0;

  $export['content_wide'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_bg';
  $selector->title = 'Footer Background';
  $selector->grp = 'Background';
  $selector->description = 'Footer background image';
  $selector->css_selector = '.ftrwrpr';
  $selector->css_properties = 'background: #FFFFFF url(\'images/bg-footer.jpg\') no-repeat scroll left top ;';
  $selector->weight = 0;

  $export['footer_bg'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'front_page_main_content_links';
  $selector->title = 'Front Page Main links (active / hover)';
  $selector->grp = 'Front Page';
  $selector->description = 'style links in Front Page Main area';
  $selector->css_selector = '.view-front-page-main div.node-inner .content a:hover,
.view-front-page-main div.node-inner .content a:active
';
  $selector->css_properties = 'color: #336699;
font-size: inherit;
text-transform: none;
text-decoration: underline;
cursor: pointer;';
  $selector->weight = 0;

  $export['front_page_main_content_links'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'front_page_main_title';
  $selector->title = 'Front Page Main Title ';
  $selector->grp = 'Front Page';
  $selector->description = 'Make front page main title look like a normal block title, rather than a title link';
  $selector->css_selector = '.view-front-page-main div.node-inner a:active, 
.view-front-page-main div.node-inner a:visited, 
.view-front-page-main div.node-inner a,  
.view-front-page-main div.node-inner a:hover, 
.view-front-page-main div.node-inner a:link';
  $selector->css_properties = 'color: #880000;
font-size: 14px;
text-transform: uppercase;
text-decoration: none;
cursor: default;';
  $selector->weight = 0;

  $export['front_page_main_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'front_page_main_title_content_links';
  $selector->title = 'Front Page Main links';
  $selector->grp = 'Front Page';
  $selector->description = 'style links in Front Page Main area';
  $selector->css_selector = '.view-front-page-main div.node-inner .content a:active,
.view-front-page-main div.node-inner .content a:visited,
.view-front-page-main div.node-inner .content a';
  $selector->css_properties = 'color: #336699; 
font-size: inherit;
text-transform: none;
text-decoration: none;
cursor: default;';
  $selector->weight = 0;

  $export['front_page_main_title_content_links'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'grid_wrapper';
  $selector->title = 'Faux Sidebar';
  $selector->grp = 'Background';
  $selector->description = 'Faux right sidebar';
  $selector->css_selector = '.gridwrpr';
  $selector->css_properties = 'background: transparent url(\'images/main_back1.gif\') repeat-y 100% 50% ;';
  $selector->weight = 0;

  $export['grid_wrapper'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'header_wrapper';
  $selector->title = 'Header Wrapper';
  $selector->grp = 'Header';
  $selector->description = 'Determine the size (height) of the header area, that is, the distance from the top of the screen to the bottom of the Main Menu';
  $selector->css_selector = '.hdrwrpr';
  $selector->css_properties = 'height: 108px;
';
  $selector->weight = 0;

  $export['header_wrapper'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'mainbody';
  $selector->title = 'Main Background';
  $selector->grp = 'Background';
  $selector->description = 'Background image (header, main menu, main body area)';
  $selector->css_selector = '.mainbody';
  $selector->css_properties = 'background: #FAFAFA url(\'images/bg-main-new.png\') no-repeat scroll center top ;';
  $selector->weight = 0;

  $export['mainbody'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'right_sidebar';
  $selector->title = 'Right Sidebar';
  $selector->grp = 'Background';
  $selector->description = 'Background image for top of right sidebar';
  $selector->css_selector = '#right-col';
  $selector->css_properties = 'background: transparent url(\'images/right_top_back.gif\') no-repeat scroll 0 0 ;';
  $selector->weight = 0;

  $export['right_sidebar'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'secondary_menu_link';
  $selector->title = 'Secondary Menu Color';
  $selector->grp = 'Secondary Menu';
  $selector->description = 'Set color for menu item links';
  $selector->css_selector = '#secondary a';
  $selector->css_properties = 'color: #336699;';
  $selector->weight = 0;

  $export['secondary_menu_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'secondary_menu_top';
  $selector->title = 'Secondar Menu Position';
  $selector->grp = 'Secondary Menu';
  $selector->description = 'Determine the position of the Secondary Menu (distance from the top of the screen)';
  $selector->css_selector = '.hdrupdtwrpr';
  $selector->css_properties = 'top: 32px;';
  $selector->weight = 0;

  $export['secondary_menu_top'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'site_name';
  $selector->title = 'Site Name';
  $selector->grp = 'Header';
  $selector->description = 'Site name link';
  $selector->css_selector = '.hdrttl';
  $selector->css_properties = 'visibility: visible;';
  $selector->weight = 0;

  $export['site_name'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'subfooter';
  $selector->title = 'Subfooter';
  $selector->grp = 'Background';
  $selector->description = '';
  $selector->css_selector = '.subftrwrpr';
  $selector->css_properties = 'background: transparent url(\'images/bg-subftr.jpg\') no-repeat scroll left top;';
  $selector->weight = 0;

  $export['subfooter'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'subheader';
  $selector->title = 'Subheader Position';
  $selector->grp = 'Subheader';
  $selector->description = '';
  $selector->css_selector = '#subheader .block';
  $selector->css_properties = '/*** margin-top: 20px; ***/
/*** margin-bottom: 20px; ***/
/*** margin-left: 20px; ***/
/*** margin-right: 20px; ***/';
  $selector->weight = 0;

  $export['subheader'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'us_flag';
  $selector->title = 'US Flag';
  $selector->grp = 'Main Menu';
  $selector->description = 'Set flag visibility (visible or hidden) and distance from top of screen';
  $selector->css_selector = '.hdrflag';
  $selector->css_properties = 'visibility: visible;
top: 83px; ';
  $selector->weight = 0;

  $export['us_flag'] = $selector;
  return $export;
}
