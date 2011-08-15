<?php

$plugin = array(
  'name' => t('Clean White'),
  'form' => 'pandora_themes_stylizer_form',
  'form submit' => 'pandora_themes_stylizer_form_submit',
  'css' => 'supplemental.css',
  'palette' => array(
    'grandient_top' => array(
      'label' => t('Background Gradient Top'),
      'default_value' => '#252525',
    ),
    'grandient_bottom' => array(
      'label' => t('Background Gradient Bottom'),
      'default_value' => '#3f3f3f',
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
);
