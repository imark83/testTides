
    /****************************************************************************
        Driver file of the minc_tides program
        This file has been automatically created by Sage
    *****************************************************************************/

    #include "minc_tides.h"

    int main() {

        int  i, VARS, PARS;


    VARS = 3 ;
    PARS = 1;
    double tolrel, tolabs, tini, tend, dt;
    double v[VARS], p[PARS];

    	v[0] = -0.04 ; 
	v[1] = 0.010000000000000 ; 
	v[2] = 0.01000000000000000 ; 
	tini = 0.00000000000000000 ;
	tend = 10000.000000000000000 ;
	dt   = 10000.0 ;
	tolrel = 9.9999999999999998e-17 ;
	tolabs = 9.9999999999999998e-17 ;
	extern char ofname[500];	strcpy(ofname, "screen");
	minc_tides(v,VARS,p,PARS,tini,tend,dt,tolrel,tolabs);
	return 0; 
 }

    /****************************************************************************
        Driver file of the minc_tides program
        This file has been automatically created by Sage
    *****************************************************************************/

    #include "minc_tides.h"

    int main() {

        int  i, VARS, PARS;


    VARS = 3 ;
    PARS = 1;
    double tolrel, tolabs, tini, tend, dt;
    double v[VARS], p[PARS];

    	v[0] = 1.0000000000000000 ; 
	v[1] = 0.00000000000000000 ; 
	v[2] = 0.00000000000000000 ; 
	tini = 0.00000000000000000 ;
	tend = 10.000000000000000 ;
	dt   = 0.10000000000000001 ;
	tolrel = 9.9999999999999998e-17 ;
	tolabs = 9.9999999999999998e-17 ;
	extern char ofname[500];	strcpy(ofname, "out");
	minc_tides(v,VARS,p,PARS,tini,tend,dt,tolrel,tolabs);
	return 0; 
 }
    /****************************************************************************
        Driver file of the minc_tides program
        This file has been automatically created by Sage
    *****************************************************************************/

    #include "minc_tides.h"

    int main() {

        int  i, VARS, PARS;


    VARS = 9 ;
    PARS = 1;
    double tolrel, tolabs, tini, tend, dt;
    double v[VARS], p[PARS];

    	v[0] = 1.0000000000000000 ; 
	v[1] = 0.00000000000000000 ; 
	v[2] = 0.00000000000000000 ; 
	v[3] = 0.40000000000000002 ; 
	v[4] = 0.50000000000000000 ; 
	v[5] = 0.20000000000000001 ; 
	v[6] = 2.0000000000000000 ; 
	v[7] = 1.0000000000000000 ; 
	v[8] = 1.0000000000000000 ; 
	tini = 0.00000000000000000 ;
	tend = 10.000000000000000 ;
	dt   = 0.10000000000000001 ;
	tolrel = 9.9999999999999998e-17 ;
	tolabs = 9.9999999999999998e-17 ;
	extern char ofname[500];	strcpy(ofname, "out");
	minc_tides(v,VARS,p,PARS,tini,tend,dt,tolrel,tolabs);
	return 0; 
 }