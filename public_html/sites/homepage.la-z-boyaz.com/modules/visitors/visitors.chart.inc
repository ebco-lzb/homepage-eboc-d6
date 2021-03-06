<?php

/* vim: set filetype=php : */

/**
 * @file
 * Draw chart for the visitors module.
 */

require_once dirname(__FILE__) .'/pchart/pData.inc';
require_once dirname(__FILE__) .'/pchart/pChart.inc';

/**
 * Get chart width.
 *
 * @return
 *   int chart width
 */
function visitors_get_chart_width() {
  $width = (int) variable_get('visitors_graph_width', 700);
  return (($width <= 0) ? 700 : $width);
}

/**
 * Get chart height.
 *
 * @return
 *   int chart height
 */
function visitors_get_chart_height() {
  $height = (int) variable_get('visitors_graph_height', 430);
  return (($height <= 0) ? 430 : $height);
}

/**
 * Draw graph.
 *
 * @values
 *   int array y-axis values
 * @x_array
 *   array x-axis params
 */
function visitors_graph($values, $x_array = NULL) {
  // Dataset definition
  $data_set = new pData;
  $data_set->AddPoint($values, 'Serie1');

  if ($x_array !== NULL) {
    $data_set->AddPoint($x_array, 'Serie2');
    $data_set->SetAbsciseLabelSerie('Serie2');
  }

  $data_set->AddSerie('Serie1');
  $data_set->SetSerieName('', 'Serie1');

  // Initialise the graph
  $width = visitors_get_chart_width();
  $height = visitors_get_chart_height();

  $pchart = new pChart($width, $height);
  $pchart->setFontProperties(dirname(__FILE__) .'/fonts/tahoma.ttf', 8);
  $pchart->setGraphArea(50, 30, $width - 20, $height - 30);
  $pchart->drawFilledRoundedRectangle(7, 7, $width - 7, $height - 7,
    5, 240, 240, 240);
  $pchart->drawRoundedRectangle(5, 5, $width - 5, $height - 5,
    5, 230, 230, 230);
  $pchart->drawGraphArea(255, 255, 255, TRUE);
  $pchart->setFixedScale(0, 0, 0, 0, 0, 0, 0);
  $pchart->drawScale($data_set->GetData(), $data_set->GetDataDescription(),
    SCALE_ADDALLSTART0, 150, 150, 150, TRUE, 0, 0, TRUE
  );
  $pchart->drawGrid(4, TRUE, 230, 230, 230, 50);

  // Draw the 0 line
  $pchart->drawTreshold(0, 143, 55, 72, TRUE, TRUE);

  // Draw the bar graph
  $pchart->drawBarGraph(
    $data_set->GetData(),
    $data_set->GetDataDescription(),
    TRUE
  );

  // Finish the graph
  $pchart->Stroke();
  exit();
}

