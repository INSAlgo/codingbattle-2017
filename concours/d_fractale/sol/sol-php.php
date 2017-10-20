<?php

function trans($f) {
    $w = sizeof($f);
    $nw = $w * 3;
    $nf = array_fill(0, $nw, "");
    for ($i = 0; $i < $w; $i++) {
        $nf[0 * $w + $i] .= $f[$i];
        $nf[1 * $w + $i] .= str_repeat( ' ', $w);
        $nf[2 * $w + $i] .= $f[$i];
    }
    for ($i = 0; $i < $w; $i++) {
        $nf[0 * $w + $i] .= str_repeat( ' ', $w);
        $nf[1 * $w + $i] .= $f[$i];
        $nf[2 * $w + $i] .= str_repeat( ' ', $w);
    }
    for ($i = 0; $i < $w; $i++) {
        $nf[0 * $w + $i] .= $f[$i];
        $nf[1 * $w + $i] .= str_repeat( ' ', $w);
        $nf[2 * $w + $i] .= $f[$i];
    }
    return $nf;
}

$n = trim(fgets(STDIN));

$f = ["X"];
for ($i = 0; $i < $n; $i++) {
    $f = trans($f);
}
for ($i = 0; $i < sizeof($f); $i++) {
    echo $f[$i]."\n";
}
