<?php

/**
 * Inspired by the Camping Cyclist color scheme on kuler.adobe.com.
 */

$plugin = array (
  'style name' => t('Camping Cyclist'),
  'css' => 'supplemental.css',
  'palette' => array (
    'gradient_top' => array (
      'label' => t('Background Gradient Top'),
      'default_value' => '#DD5F18',
    ),
    'gradient_bottom' => array (
      'label' => t('Background Gradient Bottom'),
      'default_value' => '#FBA922',
    ),
    'header_background' => array (
      'label' => t('Header Background'),
      'default_value' => '#F7F7F7',
    ),
    'header_text' => array (
      'label' => t('Header Text'),
      'default_value' => '#404333',
    ),
    'navigation_background' => array (
      'label' => t('Navigation Background'),
      'default_value' => '#404333',
    ),
    'navigation_link' => array (
      'label' => t('Navigation Link Text'),
      'default_value' => '#F7F7F7',
    ),
    'navigation_link_hover_background' => array (
      'label' => t('Navigation Link Hover Background'),
      'default_value' => '#FBA922',
    ),
    'navigation_link_hover' => array (
      'label' => t('Navigation Link Hover Text'),
      'default_value' => '#2D3032',
    ),
    'body_background' => array (
      'label' => t('Body Background'),
      'default_value' => '#F7F7F7',
    ),
    'body_text' => array (
      'label' => t('Body Text'),
      'default_value' => '#404333',
    ),
    'body_link' => array (
      'label' => t('Body Link'),
      'default_value' => '#DD5F18',
    ),
    'tasks_background' => array (
      'label' => t('Tasks Background'),
      'default_value' => '#404333',
    ),
    'tasks_text' => array (
      'label' => t('Tasks Text'),
      'default_value' => '#F7F7F7',
    ),
    'tasks_link' => array (
      'label' => t('Tasks Link Text'),
      'default_value' => '#FFFFFF',
    ),
    'actions_background' => array (
      'label' => t('Actions Background'),
      'default_value' => '#2D3032',
    ),
    'actions_link' => array (
      'label' => t('Actions Link Text'),
      'default_value' => '#F7F7F7',
    ),
    'footer_background' => array (
      'label' => t('Footer Background'),
      'default_value' => '#404333',
    ),
    'footer_text' => array (
      'label' => t('Footer Text'),
      'default_value' => '#F7F7F7',
    ),
    'footer_link' => array (
      'label' => t('Footer Link'),
      'default_value' => '#FFFFFF',
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