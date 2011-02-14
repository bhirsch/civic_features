<?php

/**
 * Implementation of hook_default_mtheme_selector().
 */
function twocolslideshow_mtheme_default_mtheme_selector() {
  $export = array();
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_accent';
  $selector->title = 'Slideshow Accent';
  $selector->grp = 'Front Page';
  $selector->description = 'Slideshow accent color (period at end of title, dashes around "VIDEO")';
  $selector->css_selector = 'div.carousel1 span.accent';
  $selector->css_properties = 'color: white;';
  $selector->weight = 0;

  $export['twocolumnslideshow_accent'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_bg';
  $selector->title = 'Slideshow Background ';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = 'div.carousel1';
  $selector->css_properties = 'width: 680px;
height: 309px;
background-image: url(\'images/twocolumnslideshow_bg/carousel1_background_3.jpg\');
overflow: hidden; 
';
  $selector->weight = 0;

  $export['twocolumnslideshow_bg'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_pic';
  $selector->title = '';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '.carousel1-pic';
  $selector->css_properties = 'float: right;
padding: 20px 20px 20px 0px;
';
  $selector->weight = 0;

  $export['twocolumnslideshow_pic'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_teaser';
  $selector->title = 'Slideshow Teaser ';
  $selector->grp = 'Front Page';
  $selector->description = 'Slideshow teaser position (alignment, width, margins, etc.)';
  $selector->css_selector = '.carousel1-teaser';
  $selector->css_properties = 'background: none repeat scroll 0 0 #144273;
color: #FFF;
float: left;
font-size: 115%;
margin-left: 0px;
padding-left: 5px;
position: static;
width: 227px;';
  $selector->weight = 0;

  $export['twocolumnslideshow_teaser'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_teaser_link';
  $selector->title = '';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '.carousel1-teaser a,
.carousel1-teaser a:active,
.carousel1-teaser a:link,
.carousel1-teaser a:visited';
  $selector->css_properties = 'color: #FFF;';
  $selector->weight = 0;

  $export['twocolumnslideshow_teaser_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_teaser_margin';
  $selector->title = 'Slideshow Teaser Margin';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '.rotor-content .views-field-field-teaser-value';
  $selector->css_properties = 'margin-bottom: 0;
margin-top: 10px;
padding-bottom: 0;';
  $selector->weight = 0;

  $export['twocolumnslideshow_teaser_margin'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_teaser_text';
  $selector->title = '';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '.carousel1-teaser p';
  $selector->css_properties = ' margin: 1em 0 1em 0;';
  $selector->weight = 0;

  $export['twocolumnslideshow_teaser_text'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_title';
  $selector->title = 'Slideshow Title Link';
  $selector->grp = 'Front Page';
  $selector->description = 'Slideshow title (color, border, uppercase / lowercase, etc.)';
  $selector->css_selector = 'div.carousel1-title a';
  $selector->css_properties = 'color: white;
/***  border-bottom: 3px solid red;  ***/
/***  text-transform: uppercase;  ***/';
  $selector->weight = 0;

  $export['twocolumnslideshow_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_title_link';
  $selector->title = '';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = 'div.carousel1-title a';
  $selector->css_properties = 'float: left;
width: 200px;
color: white;
margin: 0px 0px 15px 10px;
padding-top: 30px;
font-size: 150%;
text-align: center;
position: static;
top: 30px;
line-height: 30px;';
  $selector->weight = 0;

  $export['twocolumnslideshow_title_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_video_link';
  $selector->title = 'Slideshow Video Link';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '.carousel1-video a,
.carousel1-video a:active,
.carousel1-video a:link,
.carousel1-video a:visited';
  $selector->css_properties = 'float: left;
width: 220px;
color: #fff;
position: static;
font-size: 125%;
text-align: center;
margin-bottom: 15px;';
  $selector->weight = 0;

  $export['twocolumnslideshow_video_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'twocolumnslideshow_width_height';
  $selector->title = 'Slideshow Size';
  $selector->grp = 'Front Page';
  $selector->description = '';
  $selector->css_selector = '.rotor-view-id-front_page_carousel-view-display-id-block_1';
  $selector->css_properties = 'width: 680px;
height: 309px;';
  $selector->weight = 0;

  $export['twocolumnslideshow_width_height'] = $selector;
  return $export;
}
