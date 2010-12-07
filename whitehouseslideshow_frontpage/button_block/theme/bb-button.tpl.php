<?php 
/**
 * @file bb-button.tpl.php
 * Default theme implementation to display a Button Block button.
 *
 * Available variables:
 * - $element: stuff passed from CCK including node object
 * - $title: button title
 * - $id: button id
 * - $url: button destination link
 * - $display_title: true or false
 * - $image: imagecache button image (same as one used in background when 
 *   title is displayed, based on div id attribute)
 * - $html: this is $node->body, for displaying HTML widgets
 * - $target: target (e.g. _blank)
 *
 * @see template_preprocess_button_block_formatter_bb_button()
 */
?>
  <?php if ($html) : // if there's a widget, just use HTML ?>
    <?php print $html ?>
  <?php else: ?>
    <div id="<?php print $id ?>" class="bb-button">
      <?php if ($display_title) : ?>
        <a id="<?php print $id .'-link' ?>" href="<?php print $url ?>" target="<?php print $target ?>"><?php print $title ?></a>
      <?php else : ?>
        <a href="<?php print $url ?>" target="<?php print $target ?>"><?php print $image ?></a>
      <?php endif; ?>
    </div>
  <?php endif; // end if($html) ?>
