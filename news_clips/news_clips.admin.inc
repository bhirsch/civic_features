<?php 
/**
 * @file news_clips.admin.inc
 *  News Clips settings page.
 */

/**
 * Callback for admin/settings/news_clips.
 *
 * Form builder. 
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function news_clips_admin_settings() {
  $fair_use = 'FAIR USE NOTICE This site contains copyrighted material the use of which has not always been specifically authorized by the copyright owner. In accordance with Title 17 U.S.C. Section 107, the material on this site is available without profit for research and educational purposes. If you wish to use copyrighted material from this site for purposes of your own that go beyond "fair use", you must obtain permission from the copyright owner.'; 

  $form['newsclip'] = array(
    '#type' => 'fieldset',
    '#title' => 'News Clips Settings',
    //'#collapsible' => TRUE,
    //'#collapsed' => TRUE,
  );
  $form['newsclip']['news_clips_footer'] = array( 
    '#type' => 'textarea',
    '#title' => t('News Clip Footer'),
    '#description' => t('Some people post whole, copyrighted '
                       .'articles on their own websites ' 
                       .'along with a "fair use notice" at the bottom '
                       .'of the article. You can put a notice, or '
                       .'any other disclaimer, explanation, or custom '
                       .'footer text here. NOTE: This is '
                       .'not legal advise. Re-use copyrighted material '
                       .'at your own risk. Here is an example of a fair '
                       .'use notice: <br/><br/>'. $fair_use),
    '#default_value' => variable_get('news_clips_footer', $fair_use),
  ); 

  return system_settings_form($form);
}
