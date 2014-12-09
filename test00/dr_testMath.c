/****************************************************************************
	Driver file of the minc_tides program
	This file has been created by MathTIDES (2.00) December 4, 2014, 12:53

	Copyright (C) 2010 A. Abad, R. Barrio, F. Blesa, M. Rodriguez
	Grupo de Mecanica Espacial
	University of Zaragoza
	SPAIN

	http://gme.unizar.es/software/tides
	Contact: <tides@unizar.es>

	This file is part of TIDES.

	TIDES is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	TIDES is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with TIDES.  If not, see <http://www.gnu.org/licenses/>.

*****************************************************************************/

#include "minc_tides.h"

int main() {

	int  i, VARS, PARS; 
	VARS = 3;
	PARS = 1;
	double tolrel, tolabs, tini, tend, dt; 
	double v[VARS], p[PARS]; 
	extern char ofname[20]; 



/************************************************************/
/************************************************************/
/*      INITIAL CONDITIONS, INTEGRATION TIMES, TOLERANCES    */
/*      Change *****  by numerical values if it is necesary */
/************************************************************/
/************************************************************/

/* --- INITIAL VALUES --- */
	v[0] = ***** ; 
	v[1] = ***** ; 
	v[2] = ***** ; 

/* --- INITIAL INTEGRATION POINT --- */
	tini = ***** ;

/* --- ENDPOINT OF INTEGRATION   --- */
	tend = ***** ;

/* --- DELTA t FOR DENSE OUTPUT  --- */
	dt   = ***** ;

/* --- REQUIRED TOLERANCES --- */
	tolrel = 1.e-16 ;
	tolabs = 1.e-16 ;

/***********************************************************/
/***********************************************************/
/*  DENSE & COEFFICIENTS OUTPUT (file, screen or none)     */
/***********************************************************/
/***********************************************************/

	strcpy(ofname , "screen");

/***********************************************************/
/***********************************************************/
/*       CALL THE INTEGRATOR                               */
/***********************************************************/
/***********************************************************/

	minc_tides(v,VARS,p,PARS,tini,tend,dt,tolrel,tolabs);


	return 0;
}




