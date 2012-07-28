<?php

function ds_3col_unbalanced_html5() {
  return array(
    'label' => t('Three column unbalanced (HTML5)'),
    'regions' => array(
      'header' => t('Header'),
      'left' => t('Left'),
      'middle' => t('Middle'),
      'right' => t('Right'),
    ),
    'css' => TRUE,
  );
}