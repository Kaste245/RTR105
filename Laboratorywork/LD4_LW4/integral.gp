
#set term png
#set output 'graphx.png'

set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Integralis" 
set title  font ",20" textcolor lt -1 norotate

plot [0:20] [0:100] exp(x) with filledcurves  x1 y1 lc rgb "red"
