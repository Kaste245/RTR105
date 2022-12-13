
set key bmargin center horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set samples 400, 400
set grid
set title "Funkcijas derivative" 
set title  font ",20" textcolor lt -1 norotate


#plot [0:2*pi] exp(x) title "exp(x)"
plot "derivative.dat" every ::1 using 1:2 with lines title "exp'(x)"

plot "derivative.dat" every ::1 using 1:3 with lines title "exp'(x) (anal. forma)",\
     "derivative.dat" every ::1 using 1:4 with lines title "exp'(x) (diff. forma)",\
     "derivative.dat" every ::1 using 1:5 with lines title "exp''(x) (anal. forma)",\
     "derivative.dat" every ::1 using 1:6 with lines title "exp''(x) (diff. forma)"
