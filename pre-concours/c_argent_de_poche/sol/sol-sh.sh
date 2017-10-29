read n
read line
max=`echo $line | tr ' ' '\n' | sort -nr - | head -1`
min=`echo $line | tr ' ' '\n' | sort -n - | head -1`
sum=`echo $line | tr ' ' '+'`
moyenne2=`dc -e "10 k 0 $sum + $n / 2 ^ p"`
res=`dc -e "2 k 20 $max $min - - $moyenne2 * 100 / p"`
echo $res
