
    /****************************************************************************
        Driver file of the minc_tides program
        This file has been automatically created by Sage
    *****************************************************************************/

    #include "minc_tides.h"

    #include <time.h>

    int main(int argv, char **argc) {

        int  i, VARS, PARS;

	double sol[3] = {-4.4381998094619324720337117821617507107676529472580e-02,
			 9.9738329304847568607383672521620192393694743131742e-01,
			 2.3369631519761706834705222223662868811829990127635e-02};
	VARS = 3 ;
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
		v[0] = (double) -0.04 ; 
		v[1] = (double) 0.0210000000000000 ; 
		v[2] = (double) 0.01000000000000000 ; 
		minc_tides(v,VARS,p,PARS,tini,tend,dt,tolrel,tolabs);
		if (i==0) {
			double err = fabs ((sol[0] - v[0]) / v[0]);
			err += fabs ((sol[1] - v[1]) / v[1]);
			err += fabs ((sol[2] - v[2]) / v[2]);

			printf ("%e\t%.15le\t", tolrel, err);
		}
	}
	c1 = clock ();
	printf ("%f\n", (double) (c1 - c0) / CLOCKS_PER_SEC / niter);

	return 0; 
 }

