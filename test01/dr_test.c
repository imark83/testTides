
    /****************************************************************************
        Driver file of the minc_tides program
        This file has been automatically created by Sage
    *****************************************************************************/

    #include "minc_tides.h"

    #include <time.h>

    int main(int argv, char **argc) {

        int  i, VARS, PARS;

	double sol[9] = {};
	VARS = 0 ;
	PARS = 0;
	double tolrel, tolabs, tini, tend, dt;
	double v[VARS], p[PARS];


	clock_t c0, c1;
	int niter = 2;

	extern char ofname[500];
	strcpy(ofname, "");
	tini = 0.00000000000000000 ;
	tend = 1000.000000000000000 ;
	dt   = 1000.0 ;
	tolrel = atof (argc[1]);
	tolabs = tolrel;

	c0 = clock ();
	for (i=0; i<niter; i++) {
   	 	v[0] = -0.0400000000000000 ; 
		v[1] = 0.0210000000000000 ; 
		v[2] = 0.0100000000000000 ; 
		v[3] = -0.0400000000000000 ; 
		v[4] = 0.0310000000000000 ; 
		v[5] = 0.000000000000000 ; 
		v[6] = -0.0100000000000000 ; 
		v[7] = 0.0210000000000000 ; 
		v[8] = 0.0100000000000000 ; return;
		minc_tides(v,VARS,p,PARS,tini,tend,dt,tolrel,tolabs);
		if (i==0) {
			double err = fabs ((sol[0] - v[0]) / v[0]);
			err += fabs ((sol[1] - v[1]) / v[1]);
			err += fabs ((sol[2] - v[2]) / v[2]);
			err += fabs ((sol[3] - v[3]) / v[3]);
			err += fabs ((sol[4] - v[4]) / v[4]);
			err += fabs ((sol[5] - v[5]) / v[5]);
			err += fabs ((sol[6] - v[6]) / v[6]);
			err += fabs ((sol[7] - v[7]) / v[7]);
			err += fabs ((sol[8] - v[8]) / v[8]);

			printf ("%e\t%.15le\t", tolrel, err);
		}
	}
	c1 = clock ();
	printf ("%f\n", (double) (c1 - c0) / CLOCKS_PER_SEC / niter);

	return 0; 
 }

