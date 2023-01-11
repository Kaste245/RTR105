
#set term png
#set output 'graphx.png'

set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Integralis" 
set title  font ",20" textcolor lt -1 norotate

plot [0:15] [0:100] exp(x) with filledcurves x=5 lc rgb "orange"

