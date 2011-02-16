<?php

/**
 * Implementation of hook_default_subtheme_subtheme().
 */
function whitehouse_subtheme_default_subtheme_subtheme() {
  $export = array();
  $subtheme = new stdClass;
  $subtheme->disabled = FALSE; /* Edit this to true to make a default subtheme disabled initially */
  $subtheme->api_version = 1;
  $subtheme->name = 'whitehouse';
  $subtheme->title = 'White House';
  $subtheme->description = 'Design based on the Obama White House website, whitehouse.gov';
  $subtheme->selectors = array(
    'twocolumnslideshow_accent' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_accent',
  'title' => 'Slideshow Accent',
  'grp' => 'Front Page',
  'description' => 'Slideshow accent color (period at end of title, dashes around "VIDEO")',
  'css_selector' => 'div.carousel1 span.accent',
  'css_properties' => 'color: white;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_bg' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_bg',
  'title' => 'Slideshow Background ',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => 'div.carousel1',
  'css_properties' => 'width: 680px;
height: 309px;
background-image: url(\'images/twocolumnslideshow_bg/carousel1_background_3.jpg\');
overflow: hidden; 
',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_pic' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_pic',
  'title' => '',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => '.carousel1-pic',
  'css_properties' => 'float: right;
padding: 20px 20px 20px 0px;
',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_teaser' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_teaser',
  'title' => 'Slideshow Teaser ',
  'grp' => 'Front Page',
  'description' => 'Slideshow teaser position (alignment, width, margins, etc.)',
  'css_selector' => '.carousel1-teaser',
  'css_properties' => 'background: none repeat scroll 0 0 #144273;
color: #FFF;
float: left;
font-size: 115%;
margin-left: 0px;
padding-left: 5px;
position: static;
width: 227px;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_teaser_link' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_teaser_link',
  'title' => '',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => '.carousel1-teaser a,
.carousel1-teaser a:active,
.carousel1-teaser a:link,
.carousel1-teaser a:visited',
  'css_properties' => 'color: #FFF;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_teaser_margin' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_teaser_margin',
  'title' => 'Slideshow Teaser Margin',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => '.rotor-content .views-field-field-teaser-value',
  'css_properties' => 'margin-bottom: 0;
margin-top: 10px;
padding-bottom: 0;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_teaser_text' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_teaser_text',
  'title' => '',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => '.carousel1-teaser p',
  'css_properties' => ' margin: 1em 0 1em 0;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_title' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_title',
  'title' => 'Slideshow Title Link',
  'grp' => 'Front Page',
  'description' => 'Slideshow title (color, border, uppercase / lowercase, etc.)',
  'css_selector' => 'div.carousel1-title a',
  'css_properties' => 'color: white;
/***  border-bottom: 3px solid red;  ***/
/***  text-transform: uppercase;  ***/',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_title_link' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_title_link',
  'title' => '',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => 'div.carousel1-title a',
  'css_properties' => 'float: left;
width: 200px;
color: white;
margin: 0px 0px 15px 10px;
padding-top: 30px;
font-size: 150%;
text-align: center;
position: static;
top: 30px;
line-height: 30px;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_video_link' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_video_link',
  'title' => 'Slideshow Video Link',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => '.carousel1-video a,
.carousel1-video a:active,
.carousel1-video a:link,
.carousel1-video a:visited',
  'css_properties' => 'float: left;
width: 220px;
color: #fff;
position: static;
font-size: 125%;
text-align: center;
margin-bottom: 15px;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'twocolumnslideshow_width_height' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'twocolumnslideshow_width_height',
  'title' => 'Slideshow Size',
  'grp' => 'Front Page',
  'description' => '',
  'css_selector' => '.rotor-view-id-front_page_carousel-view-display-id-block_1',
  'css_properties' => 'width: 680px;
height: 309px;',
  'weight' => 0,
  'export_module' => 'twocolslideshow_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'footer_bg' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'footer_bg',
  'title' => 'Footer Background',
  'grp' => 'Background',
  'description' => 'Footer background image',
  'css_selector' => '.ftrwrpr',
  'css_properties' => 'background: #FFFFFF url(\'images/footer_bg/bg-footer.jpg\') no-repeat scroll left top ;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'front_page_main_content_links' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'front_page_main_content_links',
  'title' => 'Front Page Main links (active / hover)',
  'grp' => 'Front Page',
  'description' => 'style links in Front Page Main area',
  'css_selector' => '.view-front-page-main div.node-inner .content a:hover,
.view-front-page-main div.node-inner .content a:active
',
  'css_properties' => 'color: #336699;
font-size: inherit;
text-transform: none;
text-decoration: underline;
cursor: pointer;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'front_page_main_title' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'front_page_main_title',
  'title' => 'Front Page Main Title ',
  'grp' => 'Front Page',
  'description' => 'Make front page main title look like a normal block title, rather than a title link',
  'css_selector' => '.view-front-page-main div.node-inner a:active, 
.view-front-page-main div.node-inner a:visited, 
.view-front-page-main div.node-inner a,  
.view-front-page-main div.node-inner a:hover, 
.view-front-page-main div.node-inner a:link',
  'css_properties' => 'color: #880000;
font-size: 14px;
text-transform: uppercase;
text-decoration: none;
cursor: default;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'front_page_main_title_content_links' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'front_page_main_title_content_links',
  'title' => 'Front Page Main links',
  'grp' => 'Front Page',
  'description' => 'style links in Front Page Main area',
  'css_selector' => '.view-front-page-main div.node-inner .content a:active,
.view-front-page-main div.node-inner .content a:visited,
.view-front-page-main div.node-inner .content a',
  'css_properties' => 'color: #336699; 
font-size: inherit;
text-transform: none;
text-decoration: none;
cursor: default;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'grid_wrapper' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'grid_wrapper',
  'title' => 'Faux Sidebar',
  'grp' => 'Background',
  'description' => 'Faux right sidebar',
  'css_selector' => '.gridwrpr',
  'css_properties' => 'background: transparent url(\'images/grid_wrapper/main_back1.gif\') repeat-y 100% 50% ;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'header_wrapper' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'header_wrapper',
  'title' => 'Header Wrapper',
  'grp' => 'Header',
  'description' => 'Determine the size (height) of the header area, that is, the distance from the top of the screen to the bottom of the Main Menu',
  'css_selector' => '.hdrwrpr',
  'css_properties' => 'height: 108px;
',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'mainbody' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'mainbody',
  'title' => 'Main Background',
  'grp' => 'Background',
  'description' => 'Background image (header, main menu, main body area)',
  'css_selector' => '.mainbody',
  'css_properties' => 'background: #FAFAFA url(\'images/mainbody/bg-main-new.png\') no-repeat scroll center top ;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'right_sidebar' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'right_sidebar',
  'title' => 'Right Sidebar',
  'grp' => 'Background',
  'description' => 'Background image for top of right sidebar',
  'css_selector' => '#right-col',
  'css_properties' => 'background: transparent url(\'images/right_sidebar/right_top_back.gif\') no-repeat scroll 0 0 ;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'secondary_menu_link' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'secondary_menu_link',
  'title' => 'Secondary Menu Color',
  'grp' => 'Secondary Menu',
  'description' => 'Set color for menu item links',
  'css_selector' => '#secondary a',
  'css_properties' => 'color: #336699;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'secondary_menu_top' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'secondary_menu_top',
  'title' => 'Secondar Menu Position',
  'grp' => 'Secondary Menu',
  'description' => 'Determine the position of the Secondary Menu (distance from the top of the screen)',
  'css_selector' => '.hdrupdtwrpr',
  'css_properties' => 'top: 32px;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'site_name' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'site_name',
  'title' => 'Site Name',
  'grp' => 'Header',
  'description' => 'Site name link',
  'css_selector' => '.hdrttl',
  'css_properties' => 'visibility: visible;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'subfooter' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'subfooter',
  'title' => 'Subfooter',
  'grp' => 'Background',
  'description' => '',
  'css_selector' => '.subftrwrpr',
  'css_properties' => 'background: transparent url(\'images/subfooter/bg-subftr.jpg\') no-repeat scroll left top;',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'subheader' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'subheader',
  'title' => 'Subheader Position',
  'grp' => 'Subheader',
  'description' => '',
  'css_selector' => '#subheader .block',
  'css_properties' => '/*** margin-top: 20px; ***/
/*** margin-bottom: 20px; ***/
/*** margin-left: 20px; ***/
/*** margin-right: 20px; ***/',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
    'us_flag' => (object) array(
  'disabled' => FALSE,
  'api_version' => 1,
  'name' => 'us_flag',
  'title' => 'US Flag',
  'grp' => 'Main Menu',
  'description' => 'Set flag visibility (visible or hidden) and distance from top of screen',
  'css_selector' => '.hdrflag',
  'css_properties' => 'visibility: visible;
top: 83px; ',
  'weight' => 0,
  'export_module' => 'whitehouse_mtheme',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'mtheme_selector',
),
  );
  $subtheme->grps = array(
    'twocolumnslideshow_accent' => 'Front Page',
    'twocolumnslideshow_bg' => 'Front Page',
    'twocolumnslideshow_pic' => 'Front Page',
    'twocolumnslideshow_teaser' => 'Front Page',
    'twocolumnslideshow_teaser_link' => 'Front Page',
    'twocolumnslideshow_teaser_margin' => 'Front Page',
    'twocolumnslideshow_teaser_text' => 'Front Page',
    'twocolumnslideshow_title' => 'Front Page',
    'twocolumnslideshow_title_link' => 'Front Page',
    'twocolumnslideshow_video_link' => 'Front Page',
    'twocolumnslideshow_width_height' => 'Front Page',
    'footer_bg' => 'Background',
    'front_page_main_content_links' => 'Front Page',
    'front_page_main_title' => 'Front Page',
    'front_page_main_title_content_links' => 'Front Page',
    'grid_wrapper' => 'Background',
    'header_wrapper' => 'Header',
    'mainbody' => 'Background',
    'right_sidebar' => 'Background',
    'secondary_menu_link' => 'Secondary Menu',
    'secondary_menu_top' => 'Secondary Menu',
    'site_name' => 'Header',
    'subfooter' => 'Background',
    'subheader' => 'Subheader',
    'us_flag' => 'Main Menu',
  );
  $subtheme->is_active = 1;

  $export['whitehouse'] = $subtheme;
  return $export;
}