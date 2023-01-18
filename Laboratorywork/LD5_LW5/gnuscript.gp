
set term png
set output 'graph5.png'

set yrange [0:*]
set title "ASCII Vērtību histogramma" font ",20" textcolor lt -1 norotate
set xlabel "ASCII vērtības" font ",10" textcolor lt -1 norotate
set ylabel "Biež." font ",15" textcolor lt -1 norotate
set style fill solid border 0.5
plot 'statistic.txt' using 1:xtic(2) with boxes notitle
