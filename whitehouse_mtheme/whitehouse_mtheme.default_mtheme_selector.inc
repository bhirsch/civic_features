<?php

/**
 * Implementation of hook_default_mtheme_selector().
 */
function whitehouse_mtheme_default_mtheme_selector() {
  $export = array();
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'bio_title';
  $selector->title = '';
  $selector->grp = 'Views: Staff';
  $selector->description = '';
  $selector->css_selector = 'h3.bio-list-title';
  $selector->css_properties = 'font-size = 200%;';
  $selector->weight = 0;

  $export['bio_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'block_views_field_news_org_nid';
  $selector->title = '';
  $selector->grp = 'Views: News Org';
  $selector->description = '';
  $selector->css_selector = '.block .views-field-field-news-org-nid';
  $selector->css_properties = 'margin-top 2px;
margin-bottom: 2px;
font-size: 13px;
color: #336699;
text-transform: uppercase;';
  $selector->weight = 0;

  $export['block_views_field_news_org_nid'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'center_col';
  $selector->title = 'Center column, front page';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '#center_col';
  $selector->css_properties = 'float: left;
width: 430px;
line-height: 1.5em;';
  $selector->weight = 0;

  $export['center_col'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'center_col_wide';
  $selector->title = 'Center Column Wide, two column layout';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = '#center-col-wide';
  $selector->css_properties = 'float: left;
width: 585px;     
padding: 25px 25px 0 20;
margin-left: 24px;
';
  $selector->weight = 0;

  $export['center_col_wide'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'center_sm';
  $selector->title = 'Center Small, page layout';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = '#center-sm ';
  $selector->css_properties = 'width: 270px;
float: left;
';
  $selector->weight = 0;

  $export['center_sm'] = $selector;
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
  $selector->name = 'div_center_front';
  $selector->title = '';
  $selector->grp = 'Misc';
  $selector->description = '';
  $selector->css_selector = 'div #center .front';
  $selector->css_properties = 'width: 362px;';
  $selector->weight = 0;

  $export['div_center_front'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'div_left_front';
  $selector->title = '';
  $selector->grp = 'Misc';
  $selector->description = '';
  $selector->css_selector = 'div #left .front';
  $selector->css_properties = 'width: 362px;';
  $selector->weight = 0;

  $export['div_left_front'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'edit_events_submit';
  $selector->title = '';
  $selector->grp = 'Misc';
  $selector->description = '';
  $selector->css_selector = '#edit-submit-events-list';
  $selector->css_properties = 'margin: 16px 0 0 0;';
  $selector->weight = 0;

  $export['edit_events_submit'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'event_date';
  $selector->title = 'Event Date';
  $selector->grp = 'Events';
  $selector->description = '';
  $selector->css_selector = '.event-date';
  $selector->css_properties = 'color: #336699;
font-size: 145%;
font-weight: normal;
font-family: Georgia,"Times New Roman",Times,serif;
margin-bottom: 10px;';
  $selector->weight = 0;

  $export['event_date'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'event_map';
  $selector->title = '';
  $selector->grp = 'Events';
  $selector->description = '';
  $selector->css_selector = '.event-map';
  $selector->css_properties = 'text-align: center;
padding: 10px;';
  $selector->weight = 0;

  $export['event_map'] = $selector;
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
  $selector->name = 'footer_block';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '#footer .block';
  $selector->css_properties = 'width: 996px;
text-align: center;';
  $selector->weight = 0;

  $export['footer_block'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_nav_block_inner';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '.region-footer_nav div.block-inner';
  $selector->css_properties = 'max-width: 155px;
padding-left: 20px;
padding-right: 20px;';
  $selector->weight = 0;

  $export['footer_nav_block_inner'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_nav_header';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '.region-footer_nav h3.modttlred';
  $selector->css_properties = 'color: #666666; 
font-family: Arial,Helvetica,sans-serif;
font-size: 11px;
font-weight: bold;
text-transform: capitalize;';
  $selector->weight = 0;

  $export['footer_nav_header'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_nav_inner_modhdgblue_a';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '.region-footer_nav .block-inner .modhdgblue a';
  $selector->css_properties = 'color: #666666; 
font-family: Arial,Helvetica,sans-serif;
font-weight: normal;
font-size: 12px;';
  $selector->weight = 0;

  $export['footer_nav_inner_modhdgblue_a'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_nav_newsclips_nid';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '.region-footer_nav #block-views-newsclips_nav-block_1 .block-inner .views-field-nid';
  $selector->css_properties = 'margin-bottom: 5px;';
  $selector->weight = 0;

  $export['footer_nav_newsclips_nid'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_nav_region';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '.region-footer_nav';
  $selector->css_properties = 'margin-left: 20px;    
margin-top: 5px;';
  $selector->weight = 0;

  $export['footer_nav_region'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer_nav_views_newsclips';
  $selector->title = '';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '.region-footer_nav #block-views-newsclips_nav-block_1 .block-inner .field-content a';
  $selector->css_properties = 'color: #666666;
font-family: Arial,Helvetica,sans-serif;
font-weight: normal;
font-size: 115%;
line-height: 1.3em;';
  $selector->weight = 0;

  $export['footer_nav_views_newsclips'] = $selector;
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
  $selector->name = 'gridwrapper_inner';
  $selector->title = '';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = '.gridwrpr-inner';
  $selector->css_properties = 'background:transparent url(css/assets/templates/right_back.gif) repeat-y right;';
  $selector->weight = 0;

  $export['gridwrapper_inner'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'gridwrpr';
  $selector->title = '';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = '.gridwrpr';
  $selector->css_properties = 'background:#fff url(css/assets/templates/main_back1.gif) repeat-y top left;';
  $selector->weight = 0;

  $export['gridwrpr'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'h3_modhdgblue';
  $selector->title = '';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = 'h3.modhdgblue';
  $selector->css_properties = 'font-size: 15px;
font-weight: normal;';
  $selector->weight = 0;

  $export['h3_modhdgblue'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'h3_modttlblue';
  $selector->title = '';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = 'h3.modttlblue';
  $selector->css_properties = 'text-transform: uppercase;';
  $selector->weight = 0;

  $export['h3_modttlblue'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'h3_modttlred';
  $selector->title = '';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = 'h3.modttlred';
  $selector->css_properties = 'color: #880000;
font-size: 14px;
text-transform: uppercase;';
  $selector->weight = 0;

  $export['h3_modttlred'] = $selector;
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
  $selector->name = 'left_col';
  $selector->title = 'Left Column for Three-Column Layout';
  $selector->grp = 'Left Sidebar';
  $selector->description = '';
  $selector->css_selector = '#left_col';
  $selector->css_properties = 'float: left;
padding: 25px 25px 0 20px;
width: 155px; 
line-height: 1.5em;';
  $selector->weight = 0;

  $export['left_col'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'left_col_a';
  $selector->title = 'Left Column Links';
  $selector->grp = 'Left Sidebar';
  $selector->description = '';
  $selector->css_selector = '#left_col a';
  $selector->css_properties = 'color: #777777;
font-family: Arial,Helvetica,sans-serif;
font-weight: normal;';
  $selector->weight = 0;

  $export['left_col_a'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'left_col_block';
  $selector->title = '';
  $selector->grp = 'Left Sidebar';
  $selector->description = '';
  $selector->css_selector = '#left_col .block';
  $selector->css_properties = 'width: 150px;';
  $selector->weight = 0;

  $export['left_col_block'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'left_col_div';
  $selector->title = '';
  $selector->grp = 'Left Sidebar';
  $selector->description = '';
  $selector->css_selector = '#left_col div';
  $selector->css_properties = 'float: none;
padding: 1px;';
  $selector->weight = 0;

  $export['left_col_div'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'left_sm';
  $selector->title = 'three column layout, front page';
  $selector->grp = 'Left Sidebar';
  $selector->description = '';
  $selector->css_selector = '#left-sm';
  $selector->css_properties = 'width: 270px;
padding-right: 50px;
padding-left: 10px;
float: left;';
  $selector->weight = 0;

  $export['left_sm'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'main_menu_item';
  $selector->title = 'Main Menu Item';
  $selector->grp = 'Main Menu';
  $selector->description = 'Set width and border for main menu items';
  $selector->css_selector = '#topnav li';
  $selector->css_properties = 'width: 14%;';
  $selector->weight = 0;

  $export['main_menu_item'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'main_menu_link';
  $selector->title = 'Main Menu Item';
  $selector->grp = 'Main Menu';
  $selector->description = 'Set color and style of main menu items';
  $selector->css_selector = '#navbar-inner a';
  $selector->css_properties = 'text-transform: uppercase;
font-family: Georgia,"Times New Roman",Times,serif;
letter-spacing: 2px;
text-align: center;
padding-top: 8px;
margin-left: 0;
margin-right: 0;
width: 100%;';
  $selector->weight = 0;

  $export['main_menu_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'main_menu_link_hover';
  $selector->title = 'Main Menu Item (on mouse over)';
  $selector->grp = 'Main Menu';
  $selector->description = 'Set color and style of main menu items when hovering over a selected item with the mouse';
  $selector->css_selector = '#navbar-inner a:hover';
  $selector->css_properties = 'background-color: white;
padding-top: 4px;
padding-bottom: 10px;
border-top: 3px solid #870100;
color: #336699;
text-align: center;';
  $selector->weight = 0;

  $export['main_menu_link_hover'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'main_menu_top';
  $selector->title = 'Main Menu Top';
  $selector->grp = 'Main Menu';
  $selector->description = 'Distance from the top of the screen to the top of the Main Menu. Default: 67px. ';
  $selector->css_selector = 'ul#topnav';
  $selector->css_properties = 'top: 67px;
width: 100%;
margin-left: 10px;
';
  $selector->weight = 0;

  $export['main_menu_top'] = $selector;
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
  $selector->name = 'menu_item_about';
  $selector->title = 'Main Menu Item: About';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#about';
  $selector->css_properties = 'width: 14%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_about'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_agenda';
  $selector->title = 'Main Menu Item: Agenda';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#agenda';
  $selector->css_properties = 'width: 100px;
padding: 0;  
border-left: 1px solid #012B5B;';
  $selector->weight = 0;

  $export['menu_item_agenda'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_blog';
  $selector->title = 'Main Menu Item: Blog';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#blog';
  $selector->css_properties = 'width: 90px;
padding: 0; 
border-left: 1px solid #012B5';
  $selector->weight = 0;

  $export['menu_item_blog'] = $selector;
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
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_home';
  $selector->title = 'Main Menu Item: Home';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#home';
  $selector->css_properties = 'width: 11%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_home'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_issues';
  $selector->title = 'Main Menu Item: Issues';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#issues';
  $selector->css_properties = 'width: 14%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_issues'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_legislation';
  $selector->title = 'Main Menu Item: Legislation';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#legislation';
  $selector->css_properties = 'width: 16%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_legislation'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_newsclips';
  $selector->title = 'Main Menu Item: News Clips';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#news-clips';
  $selector->css_properties = 'width: 16%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_newsclips'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_pressreleases';
  $selector->title = 'Main Menu Item: Press Releases';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#press-releases';
  $selector->css_properties = 'width: 18%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_pressreleases'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_resources';
  $selector->title = 'Main Menu Item: Resources';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#resources';
  $selector->css_properties = 'width: 130px; 
padding: 0; 
border-left: 1px solid #012B5B;';
  $selector->weight = 0;

  $export['menu_item_resources'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_staff';
  $selector->title = 'Main Menu Item: Staff';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#staff';
  $selector->css_properties = 'width: 14%;
padding: 0;';
  $selector->weight = 0;

  $export['menu_item_staff'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_item_video';
  $selector->title = 'Main Menu Item: Video';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#topnav li#video';
  $selector->css_properties = 'width: 90px; 
padding: 0; 
border-left: 1px solid #012B5B;';
  $selector->weight = 0;

  $export['menu_item_video'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'menu_navbar';
  $selector->title = '';
  $selector->grp = 'Main Menu';
  $selector->description = '';
  $selector->css_selector = '#navbar li';
  $selector->css_properties = 'padding: 0;';
  $selector->weight = 0;

  $export['menu_navbar'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'mod_floatbx';
  $selector->title = '';
  $selector->grp = 'Misc';
  $selector->description = '';
  $selector->css_selector = '.mod-floatbx';
  $selector->css_properties = 'margin:52px 0px 40px 0;';
  $selector->weight = 0;

  $export['mod_floatbx'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'page_title';
  $selector->title = '';
  $selector->grp = 'Page';
  $selector->description = '';
  $selector->css_selector = '#page-title';
  $selector->css_properties = 'color: #880000;
font-size: 195%;
font-weight: normal;
margin: 0 0 15px;';
  $selector->weight = 0;

  $export['page_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'right_col';
  $selector->title = 'Right Sidebar';
  $selector->grp = 'Right Sidebar';
  $selector->description = '';
  $selector->css_selector = '#right-col';
  $selector->css_properties = 'float: right;
width: 272px;
margin: 0 0 0 40px;
padding: 15px;
background:transparent url(css/assets/templates/right_top_back.gif) no-repeat;
min-height: 400px;
line-height: 1.5em;
margin-left: 20px;';
  $selector->weight = 0;

  $export['right_col'] = $selector;
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
  $selector->name = 'secondary_menu';
  $selector->title = '';
  $selector->grp = 'Secondary Menu';
  $selector->description = '';
  $selector->css_selector = '#secondary';
  $selector->css_properties = 'font-family: Georgia,"Times New Roman",Times,serif;';
  $selector->weight = 0;

  $export['secondary_menu'] = $selector;
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
  $selector->name = 'secondary_menu_ul_links';
  $selector->title = '';
  $selector->grp = 'Secondary Menu';
  $selector->description = '';
  $selector->css_selector = '#secondary ul.li';
  $selector->css_properties = 'margin-bottom: 0;';
  $selector->weight = 0;

  $export['secondary_menu_ul_links'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'secondary_menu_ul_links_li';
  $selector->title = '';
  $selector->grp = 'Secondary Menu';
  $selector->description = '';
  $selector->css_selector = '#secondary ul.links li';
  $selector->css_properties = 'border-left: #CCCCCC solid 1px;';
  $selector->weight = 0;

  $export['secondary_menu_ul_links_li'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'secondary_menu_ul_links_li_first';
  $selector->title = '';
  $selector->grp = 'Secondary Menu';
  $selector->description = '';
  $selector->css_selector = '#secondary ul.links li.first';
  $selector->css_properties = 'border-left: none;';
  $selector->weight = 0;

  $export['secondary_menu_ul_links_li_first'] = $selector;
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
  $selector->name = 'site_name_link';
  $selector->title = 'Site Name Link';
  $selector->grp = 'Misc';
  $selector->description = '';
  $selector->css_selector = '.hdrttl a';
  $selector->css_properties = 'color: #AFAFAF;
font-size: 150%;
font-variant: small-caps;
font-family: Georgia,"Times New Roman",Times,serif;
letter-spacing: 1px;';
  $selector->weight = 0;

  $export['site_name_link'] = $selector;
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
  $selector->name = 'swsngp_modttlblue';
  $selector->title = 'CRM NGP';
  $selector->grp = 'NGP';
  $selector->description = '';
  $selector->css_selector = '.region-header .block-crmngp h3.modttlblue ';
  $selector->css_properties = '/* This is for swsngp module, to make Subject line look consistent. 
    On front page it gets .modttlred. On other pages it\'s .modttlblue. */
font-size: 14px;';
  $selector->weight = 0;

  $export['swsngp_modttlblue'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'two_column_container';
  $selector->title = 'Container for Left and Center Columns';
  $selector->grp = 'Page Layout';
  $selector->description = '';
  $selector->css_selector = '#two-col-container';
  $selector->css_properties = 'width: 629px;
padding-left: 5px; 
float: left;';
  $selector->weight = 0;

  $export['two_column_container'] = $selector;
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
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_event_list_teaser';
  $selector->title = '';
  $selector->grp = 'Views: Events';
  $selector->description = '';
  $selector->css_selector = 'div.event-list-teaser';
  $selector->css_properties = 'padding: 5px;';
  $selector->weight = 0;

  $export['views_event_list_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_event_list_title';
  $selector->title = '';
  $selector->grp = 'Views: Events';
  $selector->description = '';
  $selector->css_selector = 'div.event-list-title';
  $selector->css_properties = 'font-family: Georgia,"Times New Roman",Times,serif;
font-size: 160%;
padding: 5px;';
  $selector->weight = 0;

  $export['views_event_list_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_events_pic';
  $selector->title = '';
  $selector->grp = 'Views: Events';
  $selector->description = '';
  $selector->css_selector = 'div.event-list-pic';
  $selector->css_properties = 'float: right;
padding: 10px;
';
  $selector->weight = 0;

  $export['views_events_pic'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_featued_post_date';
  $selector->title = '';
  $selector->grp = 'Views: Featured Posts';
  $selector->description = '';
  $selector->css_selector = '.view-id-featured_posts .dateln';
  $selector->css_properties = 'text-transform: uppercase;';
  $selector->weight = 0;

  $export['views_featued_post_date'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_featured_posts_row';
  $selector->title = 'Featured Posts Item';
  $selector->grp = 'Views: Featured Posts';
  $selector->description = '';
  $selector->css_selector = '.view-id-featured_posts .views-row';
  $selector->css_properties = 'margin-bottom: 10px;
max-width: 272px;';
  $selector->weight = 0;

  $export['views_featured_posts_row'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_field_content_a_hover';
  $selector->title = '';
  $selector->grp = 'Views';
  $selector->description = '';
  $selector->css_selector = '.field-content .otherln a:hover';
  $selector->css_properties = 'text-decoration: underline;';
  $selector->weight = 0;

  $export['views_field_content_a_hover'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_field_field_teaser_value';
  $selector->title = '';
  $selector->grp = 'Views';
  $selector->description = '';
  $selector->css_selector = '.views-field-field-teaser-value';
  $selector->css_properties = 'margin-bottom: 20px;';
  $selector->weight = 0;

  $export['views_field_field_teaser_value'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_field_field_video_url_value';
  $selector->title = '';
  $selector->grp = 'Views';
  $selector->description = '';
  $selector->css_selector = '.views-field-field-video-url-value';
  $selector->css_properties = 'text-align: center;';
  $selector->weight = 0;

  $export['views_field_field_video_url_value'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_list_grp_1';
  $selector->title = '';
  $selector->grp = 'Views: Listings';
  $selector->description = '';
  $selector->css_selector = '.list-grp-1';
  $selector->css_properties = 'float: left;
padding: 10px 20px 40px 0;';
  $selector->weight = 0;

  $export['views_list_grp_1'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_list_grp_2';
  $selector->title = '';
  $selector->grp = 'Views: Listings';
  $selector->description = '';
  $selector->css_selector = '.list-grp-2';
  $selector->css_properties = 'width: 500px; /** This was originally 540px, but it breaks in IE7 above 500. **/
margin-left: 95px;
';
  $selector->weight = 0;

  $export['views_list_grp_2'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_newsclips_date';
  $selector->title = '';
  $selector->grp = 'Views: News Clips';
  $selector->description = '';
  $selector->css_selector = '.views-field-field-newsclip-date-value';
  $selector->css_properties = 'padding-bottom: 5px;
color: #003366;
text-transform: uppercase;';
  $selector->weight = 0;

  $export['views_newsclips_date'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_newsclips_list_org_nid';
  $selector->title = '';
  $selector->grp = 'Views: News Clips';
  $selector->description = '';
  $selector->css_selector = '.view-id-newsclips_list .views-field-field-news-org-nid';
  $selector->css_properties = 'margin-top: 20px;
font-size: 120%;
color: #003366;
text-transform: uppercase;';
  $selector->weight = 0;

  $export['views_newsclips_list_org_nid'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_newsclips_list_teaser';
  $selector->title = '';
  $selector->grp = 'Views: News Clips';
  $selector->description = '';
  $selector->css_selector = '.view-newsclips-list .views-field-field-teaser-value';
  $selector->css_properties = 'padding-left: 10px;';
  $selector->weight = 0;

  $export['views_newsclips_list_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_newsclips_list_title';
  $selector->title = '';
  $selector->grp = 'Views: News Clips';
  $selector->description = '';
  $selector->css_selector = '.view-newsclips-list .views-field-title h1';
  $selector->css_properties = 'margin-bottom: 0;';
  $selector->weight = 0;

  $export['views_newsclips_list_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_pr_status';
  $selector->title = '';
  $selector->grp = 'Views: Press Releases';
  $selector->description = '';
  $selector->css_selector = '.views-field-field-pr-status-value ';
  $selector->css_properties = 'font-weight: bold; 
color: #003366;';
  $selector->weight = 0;

  $export['views_pr_status'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_press_releases_list_title';
  $selector->title = '';
  $selector->grp = 'Views: Press Releases';
  $selector->description = '';
  $selector->css_selector = '.view-pressreleases-list .views-field-title h1 ';
  $selector->css_properties = 'margin-bottom: 0; 
margin-top: 20px;';
  $selector->weight = 0;

  $export['views_press_releases_list_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_press_releases_subhead';
  $selector->title = '';
  $selector->grp = 'Views: Press Releases';
  $selector->description = '';
  $selector->css_selector = '.views-field-field-pr-subhead-value ';
  $selector->css_properties = 'color: #336699;
font-size: 1.2em;';
  $selector->weight = 0;

  $export['views_press_releases_subhead'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_pressreleases_list_teaser';
  $selector->title = '';
  $selector->grp = 'Views: Press Releases';
  $selector->description = '';
  $selector->css_selector = '.view-pressreleases-list .views-field-field-teaser-value';
  $selector->css_properties = 'padding-left: 10px; 
padding-top: 10px;';
  $selector->weight = 0;

  $export['views_pressreleases_list_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_recent_posts_date';
  $selector->title = 'Recent Posts Date';
  $selector->grp = 'Views: Recent Posts';
  $selector->description = '';
  $selector->css_selector = '.view-id-recent_posts .dateln';
  $selector->css_properties = 'text-transform: none;';
  $selector->weight = 0;

  $export['views_recent_posts_date'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_recent_posts_rows';
  $selector->title = 'Recent Posts Items';
  $selector->grp = 'Views: Recent Posts';
  $selector->description = '';
  $selector->css_selector = '.view-id-recent_posts .views-row';
  $selector->css_properties = 'margin-bottom: 15px;';
  $selector->weight = 0;

  $export['views_recent_posts_rows'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_row';
  $selector->title = 'Views Row';
  $selector->grp = 'Views';
  $selector->description = '';
  $selector->css_selector = '.views-row';
  $selector->css_properties = 'float: left;  /** this breaks in IE7 */
clear: left; ';
  $selector->weight = 0;

  $export['views_row'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_table_row';
  $selector->title = '';
  $selector->grp = 'Views';
  $selector->description = '';
  $selector->css_selector = 'table.views-table tr';
  $selector->css_properties = 'background: white;';
  $selector->weight = 0;

  $export['views_table_row'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_teaser';
  $selector->title = '';
  $selector->grp = 'Views';
  $selector->description = '';
  $selector->css_selector = '.views-field-field-teaser-value';
  $selector->css_properties = 'line-height: 1.5em;';
  $selector->weight = 0;

  $export['views_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'views_upcoming_events_rows';
  $selector->title = '';
  $selector->grp = 'Views: Events';
  $selector->description = '';
  $selector->css_selector = 'div.view-events-upcoming div.views-row';
  $selector->css_properties = 'margin-bottom: 10px;';
  $selector->weight = 0;

  $export['views_upcoming_events_rows'] = $selector;
  return $export;
}
