
#set term png
#set output 'graph2.png'

set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Roots" 
set title  font ",20" textcolor lt -1 norotate

x1 = 0
plot [-5:5] [-3:6] exp(x)-1 lc rgb "dark-green", x1 lc rgb "red"
set object circle at first 0,0 radius char 1 \
  fillcolor rgb "orange" fillstyle solid noborder

