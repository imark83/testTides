from sage.calculus.desolvers import desolve_tides_mpfr
var('t,x,y,z')
s = 10
r = 28
b = 8/3
f(t,x,y,z)= [s*(y-x),x*(r-z)-y,x*y-b*z]

%time sol=desolve_tides_mpfr(f, [1, 0, 0],0 , 5, 5, 1e-100, 1e-100, 100);
%time sol=desolve_tides_mpfr(f, [1, 0, 0],0 , 5, 5, 1e-200, 1e-200, 200);
%time sol=desolve_tides_mpfr(f, [1, 0, 0],0 , 5, 5, 1e-500, 1e-500, 500);
%time sol=desolve_tides_mpfr(f, [1, 0, 0],0 , 5, 5, 1e-1000, 1e-1000, 1000);
%time sol=desolve_tides_mpfr(f, [1, 0, 0],0 , 5, 5, 1e-2000, 1e-2000, 2000);
