#!/usr/bin/gnuplot -persist
#set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
#set output 'roots.png'
set key right nobox
set samples 100
set xzeroaxis
set style line 3.14 lc rgb 'black' pt 7  
plot [-10:10] cos(x/2),"-" w p ls 3.14 , "-" w p ls -3.14,"-" w p ls 9.42 , "-" w p ls -9.42

3.14 0
-3.14  0
9.42 0
-9.42 0
