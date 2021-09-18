echo $FT_NBR1 + $FT_NBR2 | sed "s/\'/0/g" | tr '\\\"\?\!' 1234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'




#!/bin/sh

#FT_NBR2=rcrdmddd
#FT_NBR1="\\'?\"\\\"'\\"

FT_NBR1_CONVERT=`echo $FT_NBR1 | tr '\\\"?\!' "1234" | tr "'" "0"`
FT_NBR2_CONVERT=`echo $FT_NBR2 | tr 'mrdoc' '01234'`

echo "ibase=5; obase=23; $FT_NBR1_CONVERT + $FT_NBR2_CONVERT" | bc | tr '0123456789ABC' 'gtaio luSnemf'
