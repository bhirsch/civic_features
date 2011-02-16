<?php

/**
 * Implementation of hook_default_mtheme_selector().
 */
function zen_mtheme_default_mtheme_selector() {
  $export = array();
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'body';
  $selector->title = 'body';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = 'body';
  $selector->css_properties = 'margin: 0;
padding: 10px;';
  $selector->weight = 0;

  $export['body'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'breadcrumb';
  $selector->title = 'Breadcrumb';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '.breadcrumb';
  $selector->css_properties = 'padding-bottom: 0; /* Undo system.css */';
  $selector->weight = 0;

  $export['breadcrumb'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'feed_icons';
  $selector->title = 'The links to the RSS or Atom feeds for the current list of conte';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '.feed-icons';
  $selector->css_properties = ' margin: 1em 0;
';
  $selector->weight = 0;

  $export['feed_icons'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'footer';
  $selector->title = 'Footer';
  $selector->grp = 'Footer';
  $selector->description = '';
  $selector->css_selector = '#footer';
  $selector->css_properties = '/*** font-size: 10px; ***/
/*** color: black; ***/
';
  $selector->weight = 0;

  $export['footer'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'h1_title';
  $selector->title = 'Page, Block, and Comment Titles ';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = 'h1.title, h2.title, h3.title';
  $selector->css_properties = 'margin: 0;';
  $selector->weight = 0;

  $export['h1_title'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'header_blocks_wrapper';
  $selector->title = 'Wrapper for any blocks in header region';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '#header-blocks';
  $selector->css_properties = 'z-index: 200; /** hdrwrpr\'s z-index is 100, which was breaking sign-up forms in header blocks **/
position: relative;
';
  $selector->weight = 0;

  $export['header_blocks_wrapper'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'help';
  $selector->title = 'Help text on a page';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '.help';
  $selector->css_properties = 'margin: 1em 0;
';
  $selector->weight = 0;

  $export['help'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'logo';
  $selector->title = 'Logo Wrapper';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '#logo';
  $selector->css_properties = 'margin: 0 10px 0 0; 
padding: 0;
';
  $selector->weight = 0;

  $export['logo'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'more_help_link';
  $selector->title = 'Link to more help';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '.more-help-link';
  $selector->css_properties = 'font-size: 0.85em;
text-align: right;
';
  $selector->weight = 0;

  $export['more_help_link'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'pager';
  $selector->title = 'A list of page numbers when more than 1 page of content is avail';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '.pager';
  $selector->css_properties = 'clear: both;
margin: 1em 0;
text-align: center;';
  $selector->weight = 0;

  $export['pager'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'pager_current';
  $selector->title = '';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '.pager a, .pager strong.pager-current';
  $selector->css_properties = 'padding: 0.5em;
';
  $selector->weight = 0;

  $export['pager_current'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'site_name_a';
  $selector->title = 'Site Name Link';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '#site-name a:link, #site-name a:visited';
  $selector->css_properties = 'color: #000;
text-decoration: none;
';
  $selector->weight = 0;

  $export['site_name_a'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'site_name_a_hover';
  $selector->title = 'Site Name Link (on hover)';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = '#site-name a:hover';
  $selector->css_properties = 'text-decoration: underline;';
  $selector->weight = 0;

  $export['site_name_a_hover'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'ul_links';
  $selector->title = 'List of links';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = 'ul.links';
  $selector->css_properties = 'margin: 1em 0;
padding: 0;';
  $selector->weight = 0;

  $export['ul_links'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'ul_links_inline';
  $selector->title = 'List of links (inline)';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = 'ul.links.inline';
  $selector->css_properties = 'margin: 0;
display: inline;';
  $selector->weight = 0;

  $export['ul_links_inline'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'ul_links_li';
  $selector->title = '';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = 'ul.links li';
  $selector->css_properties = 'display: inline;
list-style-type: none;
padding: 0 0.5em;';
  $selector->weight = 0;

  $export['ul_links_li'] = $selector;
  $selector = new stdClass;
  $selector->disabled = FALSE; /* Edit this to true to make a default selector disabled initially */
  $selector->api_version = 1;
  $selector->name = 'website_name';
  $selector->title = 'Name of Website';
  $selector->grp = 'Zen';
  $selector->description = '';
  $selector->css_selector = 'h1#site-name, div#site-name';
  $selector->css_properties = 'margin: 0;
font-size: 2em;
line-height: 1.3em;
';
  $selector->weight = 0;

  $export['website_name'] = $selector;
  return $export;
}
