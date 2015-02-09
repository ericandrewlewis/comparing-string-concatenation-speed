<?php

$start = microtime();
$string = '';
$string .= 'John, ';
$string .= 'Paul, ';
$string .= 'George, ';
$string .= 'Ringo, ';
$end = microtime();
$elapsed = ( $end - $start ) * 1000000;
printf( "The PHP program took %lu microseconds (millionths of a second)\n", $elapsed );