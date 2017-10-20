<?php
$in = explode(" ", trim(fgets(STDIN)));
$n = $in[0];
$m = $in[1];
fscanf(STDIN, "%c", $c);

for ($i = 0; $i < $n; $i++) {
    echo str_repeat($c, $m)."\n";
}

