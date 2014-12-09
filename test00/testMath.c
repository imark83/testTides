/****************************************************************************
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

void    mincseries(double t,double *v, double *p, double **XVAR,int ORDER, int MO)
{
	int VAR,PAR,TT,i,j, inext;
	VAR = 3;
	PAR = 1;
	TT = 37;
	double XX[TT+1][MO+1];

	for(j=0; j<=TT; j++)
		for(i=0; i<=ORDER; i++)
			XX[j][i] = 0.e0;
	XX[0][0] = t;
	XX[0][1] = 1.e0;
	for(i=1;i<=VAR;i++) {
		XX[i][0] = v[i-1];
	}

	for(i=0;i<ORDER;i++) {
		if(i==0) XX[4][i] = -0.045+XX[1][i]; 
		else     XX[4][i] = XX[1][i];
		if(i==0) XX[5][i] = 0.046+XX[1][i]; 
		else     XX[5][i] = XX[1][i];
		if(i==0) XX[6][i] = 0.07+XX[1][i]; 
		else     XX[6][i] = XX[1][i];
		XX[7][i] = -160.*XX[2][i];
		XX[8][i] = -150.*XX[1][i];
		XX[9][i] = -83.*XX[1][i];
		XX[10][i] = -24.691358024691358*XX[2][i];
		XX[11][i] = -1.1111111111111112*XX[3][i];
		XX[12][i] = 500.*XX[1][i];
		XX[13][i] = mul_mc(XX[3],XX[3],i); 
		XX[14][i] = exp_mc(XX[8],XX[14],i); 
		XX[15][i] = exp_mc(XX[9],XX[15],i); 
		XX[16][i] = exp_mc(XX[12],XX[16],i);
		XX[17][i] = -30.*XX[6][i];
		XX[18][i] = -8.*XX[5][i];
		if(i==0) XX[19][i] = -0.006+XX[18][i]; 
		else     XX[19][i] = XX[18][i];
		XX[20][i] = 0.01030629917800074*XX[14][i];
		XX[21][i] = 1.*XX[16][i];
		XX[22][i] = 1.0820420035961944*XX[15][i];
		XX[23][i] = mul_mc(XX[13],XX[17],i);
		if(i==0) XX[24][i] = 8.764248219443636e-8+XX[21][i]; 
		else     XX[24][i] = XX[21][i];
		if(i==0) XX[25][i] = 1.+XX[20][i]; 
		else     XX[25][i] = XX[20][i];
		if(i==0) XX[26][i] = 1.+XX[22][i]; 
		else     XX[26][i] = XX[22][i];
		XX[27][i] = inv_mc(2.1640119060354654e-6,XX[24],XX[27], i);
		XX[28][i] = inv_mc(1.1111111111111112,XX[26],XX[28], i);
		XX[29][i] = mul_mc(XX[25],XX[25],i);
		XX[30][i] = XX[10][i]+XX[27][i];
		XX[31][i] = XX[11][i]+XX[28][i];
		XX[32][i] = mul_mc(XX[25],XX[29],i);
		XX[33][i] = div_mc(XX[7],XX[32],XX[33],i);
		XX[34][i] = mul_mc(XX[4],XX[33],i);
		XX[35][i] = XX[19][i]+XX[34][i];
		XX[36][i] = XX[23][i]+XX[35][i];
		XX[37][i] = 2.*XX[36][i];
		inext = i + 1;
		XX[1][inext] =  XX[37][i]/inext;
		XX[2][inext] =  XX[30][i]/inext;
		XX[3][inext] =  XX[31][i]/inext;
	}

	for(j=0; j<=VAR; j++)
		for(i=0; i<=ORDER; i++)
			XVAR[i][j] = XX[j][i];
}

