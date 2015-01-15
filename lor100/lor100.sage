from sage.calculus.desolvers import desolve_tides_mpfr
var('t,x,y,z')
s = 10
r = 28
b = 8/3
f(t,x,y,z)= [s*(y-x),x*(r-z)-y,x*y-b*z]

sol=desolve_tides_mpfr(f, [1, 0, 0],0 , 100, 1, 1e-1100, 1e-1100, 1100);
x=desolve_tides_mpfr(f, [1, 0, 0],0 , 100, 1, 1e-1000, 1e-1000, 1000);

err=[[sol[i][0],-log(norm(vector(sol[i][1:4])-vector(x[i][1:4])))/log(10.0)] for i in range(1,101)]

out=file('test100.txt', 'w')
for i in range(100):
    out.write(str(N(err[i][0]))+'  ' +str(err[i][1])+"\n")
     
out.close()

