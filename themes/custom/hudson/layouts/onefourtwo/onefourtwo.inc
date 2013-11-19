<?php

// Plugin definition
$plugin = array(
  'title' => t('1/4/2 Columns'),
  'category' => t('Open Futures'),
  'icon' => 'onefourtwo.png',
  'theme' => 'onefourtwo',
  'css' => 'onefourtwo.css',
  'regions' => array(
    'top' => t('Feature'),
    'col1' => t('Column 1'),
    'col2' => t('Column 2'),
    'col3' => t('Column 3'),
    'col4' => t('Column 4'),
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
