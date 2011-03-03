Panoramic Slideshow #4, version 1.0-alpha3 for Drupal 6
----------------------------------------------------------
Create a slideshow on the website's front page. Each slide
is an image (no text title or teaser) that can be linked to a designated
page (internal Drupal path or external URL).

Package
-----------
Front Page

Components
-------------
views: slideshow_panoramic_4 
  This slideshow is built with the views and views_slideshow module.
  It displays all published slides (slide is a node type) in a 
  rotating slideshow. No nodequeues involved. Simply create a slide
  and it shows up in the slideshow.

context: slideshow_panoramic_4
  Display a slideshow_panoramic_4 block in the content_top region
  on the front page of the website.

fcontrolpanel_fcontrol: create_slide
  Add "New Slide" control (link) to fcontrolpanel module's Control Panel.

fcontrolpanel_fcontrol: manage_slides
  Add "Manage Slides" control (link) to fcontrolpanel module's Control Panel.

Notes
--------------------
Slides in the slideshow are not using imagecache. This improves the 
quality of the slides, but it also means users can easily put in the "wrong"
size slides and make things look funny or inconsistent. The slideshow 
was originally built for slides 684x427.
