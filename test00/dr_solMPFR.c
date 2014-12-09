
    /****************************************************************************
    Driver file of the mp_tides program
    This file has been created automatically by Sage
    *****************************************************************************/

    #include <mpfr.h>
    #include "mp_tides.h"
    long  function_iteration(iteration_data *itd, mpfr_t t, mpfr_t v[], mpfr_t p[], int ORDER, mpfr_t *cvfd);

    int main() {

        int i;



    int nfun = 0;
    	set_precision_digits(50);
	int npar = 0;
	mpfr_t p[npar];
	for(i=0; i<npar; i++) mpfr_init2(p[i], TIDES_PREC);
	int nvar = 3;
	mpfr_t v[nvar];
	for(i=0; i<nvar; i++) mpfr_init2(v[i], TIDES_PREC);
	mpfr_set_str(v[0], "-0.040000000000000000000000000000000000000000000000000", 10, TIDES_RND);
	mpfr_set_str(v[1], "0.021000000000000000000000000000000000000000000000000", 10, TIDES_RND);
	mpfr_set_str(v[2], "0.010000000000000000000000000000000000000000000000000", 10, TIDES_RND);
	mpfr_t tolrel, tolabs;
	mpfr_init2(tolrel, TIDES_PREC); 
	mpfr_init2(tolabs, TIDES_PREC); 
	mpfr_set_str(tolrel, "1.0000000000000000000000000000000000000000000000000e-40", 10, TIDES_RND);
	mpfr_set_str(tolabs, "1.0000000000000000000000000000000000000000000000000e-40", 10, TIDES_RND);
	mpfr_t tini, dt; 
	mpfr_init2(tini, TIDES_PREC); 
	mpfr_init2(dt, TIDES_PREC); 
	mpfr_set_str(tini, "0.00000000000000000000000000000000000000000000000000", 10, TIDES_RND);;
	mpfr_set_str(dt, "100.0000000000000000000000000000000000000000000000", 10, TIDES_RND);
	int nipt = 1;
	FILE* fd = fopen("solMPFR.txt", "w");
	mp_tides_delta(function_iteration, NULL, nvar, npar, nfun, v, p, tini, dt, nipt, tolrel, tolabs, NULL, fd);
	fclose(fd);
	return 0;
}
