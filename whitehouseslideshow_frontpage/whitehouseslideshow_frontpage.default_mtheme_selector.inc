<?php

/**
 * Implementation of hook_default_mtheme_selector().
 */
function whitehouseslideshow_frontpage_default_mtheme_selector() {
  $export = array();
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'carousel1_pic';
  $selector->title = '';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.carousel1-pic';
  $selector->css_properties = 'float: right;
padding: 20px;';
  $selector->weight = 0;

  $export['carousel1_pic'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'carousel1_teaser';
  $selector->title = 'Slide Show Teaser';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.carousel1-teaser';
  $selector->css_properties = 'float: left;
width: 255px;
color: #FFF;
padding-left: 45px;
position: relative;
top: 80px;
font-size: 115%;';
  $selector->weight = 0;

  $export['carousel1_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'carousel1_teaser_links';
  $selector->title = 'Slide Show Teaser Links';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.carousel1-teaser a,
.carousel1-teaser a:active,
.carousel1-teaser a:link,
.carousel1-teaser a:visited';
  $selector->css_properties = 'color: #FFF;';
  $selector->weight = 0;

  $export['carousel1_teaser_links'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'carousel1_title';
  $selector->title = 'Slide Show Title';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = 'div.carousel1-title a';
  $selector->css_properties = 'float: left;
width: 255px;
color: white;
margin-left: 40px;
padding-top: 30px;
font-size: 240%;
text-align: center;
position: relative;
top: 30px;
line-height: 40px;';
  $selector->weight = 0;

  $export['carousel1_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'carousel1_video_link';
  $selector->title = 'Slide Show Video Link';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.carousel1-video a,
.carousel2-video a:active,
.carousel1-video a:link,
.carousel1-video a:visited';
  $selector->css_properties = 'float: left;
width: 255px;
color: #FFF;
padding-left: 35px;
position: relative;
top: 60px;
font-size: 125%;
text-align: center;';
  $selector->weight = 0;

  $export['carousel1_video_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'div_carousel1';
  $selector->title = '';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = 'div.carousel1';
  $selector->css_properties = 'width: 996px;
height: 388px;
background-image: url(images/carousel1_background_3.jpg);';
  $selector->weight = 0;

  $export['div_carousel1'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'front_page_carousel_view_display_id_block_1';
  $selector->title = '';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.rotor-view-id-front_page_carousel-view-display-id-block_1';
  $selector->css_properties = 'width: 996px;
height: 388px;';
  $selector->weight = 0;

  $export['front_page_carousel_view_display_id_block_1'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'rotor_content_teaser';
  $selector->title = '';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.rotor-content .views-field-field-teaser-value';
  $selector->css_properties = 'margin-bottom: 0;
padding-bottom: 0;';
  $selector->weight = 0;

  $export['rotor_content_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'rotor_items';
  $selector->title = '';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.rotor-items';
  $selector->css_properties = 'background: #012B5B;
overflow: visible;';
  $selector->weight = 0;

  $export['rotor_items'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'rotor_tab';
  $selector->title = 'Slide Show Tab';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.rotor-tab';
  $selector->css_properties = 'color: #2E689A;
float: left;
padding-left: 10px;
padding-bottom: 2px;
margin-top: 5px;
margin-left: 20px;
font-size: 115%;';
  $selector->weight = 0;

  $export['rotor_tab'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'rotor_tabs';
  $selector->title = 'Slide Show Tabs';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.view-front-page-carousel .rotor-tabs';
  $selector->css_properties = 'width: 996px;
height: 30px; 
background-image: url(images/rotor1_background.jpg);';
  $selector->weight = 0;

  $export['rotor_tabs'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'selected_rotor_tabs';
  $selector->title = 'Slide Show: Selected Tabs';
  $selector->grp = 'Front Page: Slide Show';
  $selector->description = '';
  $selector->css_selector = '.rotor-tabs .selected';
  $selector->css_properties = 'color: #FFF6DF;';
  $selector->weight = 0;

  $export['selected_rotor_tabs'] = $selector;
  return $export;
}
