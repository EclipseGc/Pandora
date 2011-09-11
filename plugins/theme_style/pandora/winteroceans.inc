<?php

/**
 * Inspired by the Winter Oceans color scheme on kuler.adobe.com.
 */

$plugin = array(
  'style name' => t('Winter Oceans'),
  'css' => 'supplemental.css',
  'palette' => array(
    'gradient_top' => array(
      'label' => t('Background Gradient Top'),
      'default_value' => '#212A2A',
    ),
    'gradient_bottom' => array(
      'label' => t('Background Gradient Bottom'),
      'default_value' => '#A5D2D5',
    ),
    'header_background' => array(
      'label' => t('Header Background'),
      'default_value' => '#F0F8F9',
    ),
    'header_text' => array(
      'label' => t('Header Text'),
      'default_value' => '#212A2A',
    ),
    'navigation_background' => array(
      'label' => t('Navigation Background'),
      'default_value' => '#749395',
    ),
    'navigation_link' => array(
      'label' => t('Navigation Link Text'),
      'default_value' => '#212A2A',
    ),
    'navigation_link_hover_background' => array(
      'label' => t('Navigation Link Hover Background'),
      'default_value' => '#212A2A',
    ),
    'navigation_link_hover' => array(
      'label' => t('Navigation Link Hover Text'),
      'default_value' => '#F0F8F9',
    ),
    'body_background' => array(
      'label' => t('Body Background'),
      'default_value' => '#F0F8F9',
    ),
    'body_text' => array(
      'label' => t('Body Text'),
      'default_value' => '#212A2A',
    ),
    'body_link' => array(
      'label' => t('Body Link'),
      'default_value' => '#425455',
    ),
    'tasks_background' => array(
      'label' => t('Tasks Background'),
      'default_value' => '#425455',
    ),
    'tasks_text' => array(
      'label' => t('Tasks Text'),
      'default_value' => '#F0F8F9',
    ),
    'tasks_link' => array(
      'label' => t('Tasks Link Text'),
      'default_value' => '#F0F8F9',
    ),
    'actions_background' => array(
      'label' => t('Actions Background'),
      'default_value' => '#212A2A',
    ),
    'actions_link' => array(
      'label' => t('Actions Link Text'),
      'default_value' => '#F0F8F9',
    ),
    'footer_background' => array(
      'label' => t('Footer Background'),
      'default_value' => '#212A2A',
    ),
    'footer_text' => array(
      'label' => t('Footer Text'),
      'default_value' => '#F0F8F9',
    ),
    'footer_link' => array(
      'label' => t('Footer Link'),
      'default_value' => '#F0F8F9',
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
