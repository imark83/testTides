/****************************************************************************
	This file has been created by MathTIDES (2.00) December 11, 2014, 12:20

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
	VAR = 9;
	PAR = 1;
	TT = 141;
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
		if(i==0) XX[10][i] = -0.045+XX[1][i]; 
		else     XX[10][i] = XX[1][i];
		if(i==0) XX[11][i] = -0.045+XX[4][i]; 
		else     XX[11][i] = XX[4][i];
		if(i==0) XX[12][i] = -0.045+XX[7][i]; 
		else     XX[12][i] = XX[7][i];
		if(i==0) XX[13][i] = 0.046+XX[1][i]; 
		else     XX[13][i] = XX[1][i];
		if(i==0) XX[14][i] = 0.046+XX[4][i]; 
		else     XX[14][i] = XX[4][i];
		if(i==0) XX[15][i] = 0.046+XX[7][i]; 
		else     XX[15][i] = XX[7][i];
		if(i==0) XX[16][i] = 0.0625+XX[1][i]; 
		else     XX[16][i] = XX[1][i];
		if(i==0) XX[17][i] = 0.0625+XX[4][i]; 
		else     XX[17][i] = XX[4][i];
		if(i==0) XX[18][i] = 0.0625+XX[7][i]; 
		else     XX[18][i] = XX[7][i];
		if(i==0) XX[19][i] = 0.07+XX[1][i]; 
		else     XX[19][i] = XX[1][i];
		if(i==0) XX[20][i] = 0.07+XX[4][i]; 
		else     XX[20][i] = XX[4][i];
		if(i==0) XX[21][i] = 0.07+XX[7][i]; 
		else     XX[21][i] = XX[7][i];
		XX[22][i] = -1000.*XX[1][i];
		XX[23][i] = -1000.*XX[4][i];
		XX[24][i] = -1000.*XX[7][i];
		XX[25][i] = -160.*XX[2][i];
		XX[26][i] = -160.*XX[5][i];
		XX[27][i] = -160.*XX[8][i];
		XX[28][i] = -150.*XX[1][i];
		XX[29][i] = -150.*XX[4][i];
		XX[30][i] = -150.*XX[7][i];
		XX[31][i] = -83.*XX[1][i];
		XX[32][i] = -83.*XX[4][i];
		XX[33][i] = -83.*XX[7][i];
		XX[34][i] = -24.691358024691358*XX[2][i];
		XX[35][i] = -24.691358024691358*XX[5][i];
		XX[36][i] = -24.691358024691358*XX[8][i];
		XX[37][i] = -1.1111111111111112*XX[3][i];
		XX[38][i] = -1.1111111111111112*XX[6][i];
		XX[39][i] = -1.1111111111111112*XX[9][i];
		XX[40][i] = 500.*XX[1][i];
		XX[41][i] = 500.*XX[4][i];
		XX[42][i] = 500.*XX[7][i];
		XX[43][i] = mul_mc(XX[3],XX[3],i);
		XX[44][i] = mul_mc(XX[6],XX[6],i);
		XX[45][i] = mul_mc(XX[9],XX[9],i); 
		XX[46][i] = exp_mc(XX[22],XX[46],i); 
		XX[47][i] = exp_mc(XX[23],XX[47],i); 
		XX[48][i] = exp_mc(XX[24],XX[48],i); 
		XX[49][i] = exp_mc(XX[28],XX[49],i); 
		XX[50][i] = exp_mc(XX[29],XX[50],i); 
		XX[51][i] = exp_mc(XX[30],XX[51],i); 
		XX[52][i] = exp_mc(XX[31],XX[52],i); 
		XX[53][i] = exp_mc(XX[32],XX[53],i); 
		XX[54][i] = exp_mc(XX[33],XX[54],i); 
		XX[55][i] = exp_mc(XX[40],XX[55],i); 
		XX[56][i] = exp_mc(XX[41],XX[56],i); 
		XX[57][i] = exp_mc(XX[42],XX[57],i);
		XX[58][i] = -30.*XX[19][i];
		XX[59][i] = -30.*XX[20][i];
		XX[60][i] = -30.*XX[21][i];
		XX[61][i] = -8.*XX[13][i];
		XX[62][i] = -8.*XX[14][i];
		XX[63][i] = -8.*XX[15][i];
		XX[64][i] = -0.0004*XX[16][i];
		XX[65][i] = -0.0004*XX[17][i];
		XX[66][i] = -0.0004*XX[18][i];
		if(i==0) XX[67][i] = -0.006+XX[61][i]; 
		else     XX[67][i] = XX[61][i];
		if(i==0) XX[68][i] = -0.006+XX[62][i]; 
		else     XX[68][i] = XX[62][i];
		if(i==0) XX[69][i] = -0.006+XX[63][i]; 
		else     XX[69][i] = XX[63][i];
		XX[70][i] = 9.357622968840174e-14*XX[46][i];
		XX[71][i] = 9.357622968840174e-14*XX[47][i];
		XX[72][i] = 9.357622968840174e-14*XX[48][i];
		XX[73][i] = 0.01030629917800074*XX[49][i];
		XX[74][i] = 0.01030629917800074*XX[50][i];
		XX[75][i] = 0.01030629917800074*XX[51][i];
		XX[76][i] = 1.*XX[55][i];
		XX[77][i] = 1.*XX[56][i];
		XX[78][i] = 1.*XX[57][i];
		XX[79][i] = 1.0820420035961944*XX[52][i];
		XX[80][i] = 1.0820420035961944*XX[53][i];
		XX[81][i] = 1.0820420035961944*XX[54][i];
		XX[82][i] = mul_mc(XX[43],XX[58],i);
		XX[83][i] = mul_mc(XX[44],XX[59],i);
		XX[84][i] = mul_mc(XX[45],XX[60],i);
		if(i==0) XX[85][i] = 8.764248219443636e-8+XX[76][i]; 
		else     XX[85][i] = XX[76][i];
		if(i==0) XX[86][i] = 8.764248219443636e-8+XX[77][i]; 
		else     XX[86][i] = XX[77][i];
		if(i==0) XX[87][i] = 8.764248219443636e-8+XX[78][i]; 
		else     XX[87][i] = XX[78][i];
		if(i==0) XX[88][i] = 1.+XX[70][i]; 
		else     XX[88][i] = XX[70][i];
		if(i==0) XX[89][i] = 1.+XX[71][i]; 
		else     XX[89][i] = XX[71][i];
		if(i==0) XX[90][i] = 1.+XX[72][i]; 
		else     XX[90][i] = XX[72][i];
		if(i==0) XX[91][i] = 1.+XX[73][i]; 
		else     XX[91][i] = XX[73][i];
		if(i==0) XX[92][i] = 1.+XX[74][i]; 
		else     XX[92][i] = XX[74][i];
		if(i==0) XX[93][i] = 1.+XX[75][i]; 
		else     XX[93][i] = XX[75][i];
		if(i==0) XX[94][i] = 1.+XX[79][i]; 
		else     XX[94][i] = XX[79][i];
		if(i==0) XX[95][i] = 1.+XX[80][i]; 
		else     XX[95][i] = XX[80][i];
		if(i==0) XX[96][i] = 1.+XX[81][i]; 
		else     XX[96][i] = XX[81][i];
		XX[97][i] = inv_mc(2.1640119060354654e-6,XX[85],XX[97], i);
		XX[98][i] = inv_mc(2.1640119060354654e-6,XX[86],XX[98], i);
		XX[99][i] = inv_mc(2.1640119060354654e-6,XX[87],XX[99], i);
		XX[100][i] = inv_mc(1.,XX[88],XX[100], i);
		XX[101][i] = inv_mc(1.,XX[89],XX[101], i);
		XX[102][i] = inv_mc(1.,XX[90],XX[102], i);
		XX[103][i] = inv_mc(1.1111111111111112,XX[94],XX[103], i);
		XX[104][i] = inv_mc(1.1111111111111112,XX[95],XX[104], i);
		XX[105][i] = inv_mc(1.1111111111111112,XX[96],XX[105], i);
		XX[106][i] = mul_mc(XX[91],XX[91],i);
		XX[107][i] = mul_mc(XX[92],XX[92],i);
		XX[108][i] = mul_mc(XX[93],XX[93],i);
		XX[109][i] = XX[34][i]+XX[97][i];
		XX[110][i] = XX[35][i]+XX[98][i];
		XX[111][i] = XX[36][i]+XX[99][i];
		XX[112][i] = XX[37][i]+XX[103][i];
		XX[113][i] = XX[38][i]+XX[104][i];
		XX[114][i] = XX[39][i]+XX[105][i];
		XX[115][i] = XX[100][i]+XX[101][i];
		XX[116][i] = XX[100][i]+XX[102][i];
		XX[117][i] = XX[101][i]+XX[102][i];
		XX[118][i] = mul_mc(XX[91],XX[106],i);
		XX[119][i] = mul_mc(XX[92],XX[107],i);
		XX[120][i] = mul_mc(XX[93],XX[108],i);
		XX[121][i] = div_mc(XX[25],XX[118],XX[121],i);
		XX[122][i] = div_mc(XX[26],XX[119],XX[122],i);
		XX[123][i] = div_mc(XX[27],XX[120],XX[123],i);
		XX[124][i] = mul_mc(XX[64],XX[117],i);
		XX[125][i] = mul_mc(XX[65],XX[116],i);
		XX[126][i] = mul_mc(XX[66],XX[115],i);
		XX[127][i] = mul_mc(XX[10],XX[121],i);
		XX[128][i] = mul_mc(XX[11],XX[122],i);
		XX[129][i] = mul_mc(XX[12],XX[123],i);
		XX[130][i] = XX[67][i]+XX[127][i];
		XX[131][i] = XX[68][i]+XX[128][i];
		XX[132][i] = XX[69][i]+XX[129][i];
		XX[133][i] = XX[124][i]+XX[130][i];
		XX[134][i] = XX[125][i]+XX[131][i];
		XX[135][i] = XX[126][i]+XX[132][i];
		XX[136][i] = XX[82][i]+XX[133][i];
		XX[137][i] = XX[83][i]+XX[134][i];
		XX[138][i] = XX[84][i]+XX[135][i];
		XX[139][i] = 2.*XX[136][i];
		XX[140][i] = 2.*XX[137][i];
		XX[141][i] = 2.*XX[138][i];
		inext = i + 1;
		XX[1][inext] =  XX[139][i]/inext;
		XX[2][inext] =  XX[109][i]/inext;
		XX[3][inext] =  XX[112][i]/inext;
		XX[4][inext] =  XX[140][i]/inext;
		XX[5][inext] =  XX[110][i]/inext;
		XX[6][inext] =  XX[113][i]/inext;
		XX[7][inext] =  XX[141][i]/inext;
		XX[8][inext] =  XX[111][i]/inext;
		XX[9][inext] =  XX[114][i]/inext;
	}

	for(j=0; j<=VAR; j++)
		for(i=0; i<=ORDER; i++)
			XVAR[i][j] = XX[j][i];
}

