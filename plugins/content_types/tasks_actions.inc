<?php

/**
 * @file
 * Plugin to handle the 'page' content type which allows the standard page
 * template variables to be embedded into a panel.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Pandora Tasks & Actions'),
  'single' => TRUE,
  'icon' => 'icon_page.png',
  'description' => t('Add the tabs (local tasks) and actions (local actions) as content.'),
  'category' => t('Pandora Content'),
  'render last' => TRUE,
  'defaults' => array(
    'primary' => TRUE,
    'secondary' => TRUE,
    'actions' => TRUE,
  ),
);

/**
 * Output function for the 'page_tabs' content type.
 *
 * Outputs the tabs (local tasks) of the current page.
 */
function pandora_tasks_actions_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $links = menu_local_tasks();
  $block->content = array();
  if ($conf['primary'] && $links['tabs']['count'] > 1) {
      $block->content['primary'] .= $links['tabs']['output'];
  }
  if ($conf['actions']) {
    $block->content['actions'] .= $links['actions']['output'];
  }
  if ($conf['secondary']) {
    $links = menu_local_tasks(1);
    $block->content['secondary'] .= $links['tabs']['count'] > 1 ? $links['tabs']['output'] : '';
  }
drupal_set_message('<pre>' . var_export($block->content, TRUE) . '</pre>');
  return $block;
}


function pandora_tasks_actions_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['primary'] = array(
    '#title' => t('Primary Tabs'),
    '#type' => 'checkbox',
    '#default_value' => $conf['primary'],
  );
  $form['secondary'] = array(
    '#title' => t('Secondary Tabs'),
    '#type' => 'checkbox',
    '#default_value' => $conf['secondary'],
  );
  $form['actions'] = array(
    '#title' => t('Local Actions'),
    '#type' => 'checkbox',
    '#default_value' => $conf['actions'],
  );
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function pandora_tasks_actions_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
