set term svg size 640,400
set output "test00.svg"

set logscale x
set xlabel "error"
set ylabel "CPU time"

plot "./testSage.txt" u 2:3 w linespoints  pt 2 ps 2 lc rgb "blue" title "SageMath parser",\
"./testMath.txt" u 2:3 w linespoints pt 1 ps 3 lc rgb "red" title "Mathematica parser"
