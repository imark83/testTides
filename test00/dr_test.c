
    /****************************************************************************
        Driver file of the minc_tides program
        This file has been automatically created by Sage
    *****************************************************************************/

    #include "minc_tides.h"

    #include <time.h>

    int main(int argv, char **argc) {

        int  i, VARS, PARS;

	double sol[3] = {-4.3815948854490813637116275721633359475328091766693e-02,
			  9.9655430303177986059845795822714707978533188250558e-01,
			  2.3416570362307347579591221540799745112280741420341e-02};
	VARS = 3 ;
	PARS = 0;
	double tolrel, tolabs, tini, tend, dt;
	double v[VARS], p[PARS];


	clock_t c0, c1;
	int niter = 10;

	extern char ofname[500];
	strcpy(ofname, "");
	tini = 0.00000000000000000 ;
	tend = 100.000000000000000 ;
	dt   = 100.0 ;
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

