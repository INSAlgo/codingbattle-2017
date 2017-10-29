read h l
read char
yes `printf '%*s\n' $l | tr ' ' $char` | head -$h
