<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Stacked Two Column 8 4'),
  'category' => t('Pandora Layouts'),
  'icon' => '2col8-4-stacked.png',
  'theme' => 'pandora_twocol_8_4_stacked',
  'regions' => array(
    'header' => t('Header'),
    'navigation' => t('Navigation'),
    'main' => t('Main Article'),
    'secondary' => t('Secondary Articles'),
    'footer' => t('Footer'),
  ),
);
