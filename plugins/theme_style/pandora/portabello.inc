<?php

/**
 * Inspired by the BiscuitPortabello color scheme on kuler.adobe.com.
 */

$plugin = array(
  'style name' => t('Portabello'),
  'css' => 'supplemental.css',
  'palette' => array(
    'gradient_top' => array(
      'label' => t('Background Gradient Top'),
      'default_value' => '#ECE1CF',
    ),
    'gradient_bottom' => array(
      'label' => t('Background Gradient Bottom'),
      'default_value' => '#ECE1CF',
    ),
    'header_background' => array(
      'label' => t('Header Background'),
      'default_value' => '#FFFFFF',
    ),
    'header_text' => array(
      'label' => t('Header Text'),
      'default_value' => '#937E62',
    ),
    'navigation_background' => array(
      'label' => t('Navigation Background'),
      'default_value' => '#647E87',
    ),
    'navigation_link' => array(
      'label' => t('Navigation Link Text'),
      'default_value' => '#ffffff',
    ),
    'navigation_link_hover_background' => array(
      'label' => t('Navigation Link Hover Background'),
      'default_value' => '#ECE1CF',
    ),
    'navigation_link_hover' => array(
      'label' => t('Navigation Link Hover Text'),
      'default_value' => '#3f3f3f',
    ),
    'body_background' => array(
      'label' => t('Body Background'),
      'default_value' => '#FFFFFF',
    ),
    'body_text' => array(
      'label' => t('Body Text'),
      'default_value' => '#937E62',
    ),
    'body_link' => array(
      'label' => t('Body Link'),
      'default_value' => '#647E87',
    ),
    'tasks_background' => array(
      'label' => t('Tasks Background'),
      'default_value' => '#647E87',
    ),
    'tasks_text' => array(
      'label' => t('Tasks Text'),
      'default_value' => '#ffffff',
    ),
    'tasks_link' => array(
      'label' => t('Tasks Link Text'),
      'default_value' => '#ffffff',
    ),
    'actions_background' => array(
      'label' => t('Actions Background'),
      'default_value' => '#E1B8A6',
    ),
    'actions_link' => array(
      'label' => t('Actions Link Text'),
      'default_value' => '#252525',
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
