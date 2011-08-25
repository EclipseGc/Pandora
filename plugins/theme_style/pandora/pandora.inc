<?php

$plugin = array(
  'name' => t('Clean White'),
  'form' => 'pandora_themes_stylizer_form',
  'form submit' => 'pandora_themes_stylizer_form_submit',
  'css' => 'supplemental.css',
  'palette' => array(
    'gradient_top' => array(
      'label' => t('Background Gradient Top'),
      'default_value' => '#252525',
    ),
    'gradient_bottom' => array(
      'label' => t('Background Gradient Bottom'),
      'default_value' => '#3f3f3f',
    ),
    'header_background' => array(
      'label' => t('Header Background'),
      'default_value' => '#FFFFFF',
    ),
    'header_text' => array(
      'label' => t('Header Text'),
      'default_value' => '#333333',
    ),
    'navigation_background' => array(
      'label' => t('Navigation Background'),
      'default_value' => '#b00d14',
    ),
    'navigation_link' => array(
      'label' => t('Navigation Link Text'),
      'default_value' => '#ffffff',
    ),
    'navigation_link_hover_background' => array(
      'label' => t('Navigation Link Hover Background'),
      'default_value' => '#ffffff',
    ),
    'navigation_link_hover' => array(
      'label' => t('Navigation Link Hover Text'),
      'default_value' => '#000000',
    ),
    'body_background' => array(
      'label' => t('Body Background'),
      'default_value' => '#FFFFFF',
    ),
    'body_text' => array(
      'label' => t('Body Text'),
      'default_value' => '#333333',
    ),
    'body_link' => array(
      'label' => t('Body Link'),
      'default_value' => '#b00d14',
    ),
    'tasks_background' => array(
      'label' => t('Tasks Background'),
      'default_value' => '#3f3f3f',
    ),
    'tasks_text' => array(
      'label' => t('Tasks Text'),
      'default_value' => '#ffffff',
    ),
    'tasks_link' => array(
      'label' => t('Tasks Link Text'),
      'default_value' => '#c2c2c2',
    ),
    'actions_background' => array(
      'label' => t('Actions Background'),
      'default_value' => '#242424',
    ),
    'actions_link' => array(
      'label' => t('Actions Link Text'),
      'default_value' => '#ffffff',
    ),
    'footer_background' => array(
      'label' => t('Footer Background'),
      'default_value' => '#252525',
    ),
    'footer_text' => array(
      'label' => t('Footer Text'),
      'default_value' => '#ffffff',
    ),
    'footer_link' => array(
      'label' => t('Footer Link'),
      'default_value' => '#c2c2c2',
    ),
  ),
  'actions' => array(
    array('load', 'plus', 'add.png'),
    array('colorize', 'actions_link'),
    array('slice', 'add.png', 0, 0, 9, 9),
    array('new', 'gradient', 1, 900),
    array('gradient', 'gradient_top', 'gradient_bottom', 0, 0, 1, 900,),
    array('slice', 'gradient.png', 0, 0, 1, 900),
  ),
);
