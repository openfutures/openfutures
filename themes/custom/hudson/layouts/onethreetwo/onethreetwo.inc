<?php

// Plugin definition
$plugin = array(
  'title' => t('Top feature and columns'),
  'category' => t('Open Futures'),
  'icon' => 'onethreetwo.png',
  'theme' => 'onethreetwo',
  'css' => 'onethreetwo.css',
  'regions' => array(
    'top' => t('Feature'),
    'col1' => t('Column 1'),
    'col2' => t('Column 2'),
    'col3' => t('Column 3'),
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
