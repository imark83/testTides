
    /****************************************************************************
    This file has been created by Sage for its use with TIDES
    *****************************************************************************/

    #include "mp_tides.h"

    long  function_iteration(iteration_data *itd, mpfr_t t, mpfr_t v[], mpfr_t p[], int ORDER, mpfr_t *cvfd)
    {

    int i;
    int NCONST = 0;
    mpfr_t ct[0];
    
	static int VARIABLES = 9;
	static int PARAMETERS = 0;
	static int LINKS = 133;
	static int   FUNCTIONS        = 0;
	static int   POS_FUNCTIONS[1] = {0};

	initialize_mp_case();

	mpfr_t c0; mpfrts_init (&c0);
	mpfr_t c1; mpfrts_init (&c1);
	mpfrts_set_str(&c0, "24.691358024691400000000000000000000000000000000000");
	mpfrts_set_str(&c1, "1.1111111111111100000000000000000000000000000000000");

	for(i=0;  i<=ORDER; i++) {
		mpfrts_var_t(itd, link[34], var[1], i);
		mpfrts_var_t(itd, link[41], var[2], i);
		mpfrts_var_t(itd, link[48], var[3], i);
		mpfrts_var_t(itd, link[78], var[4], i);
		mpfrts_var_t(itd, link[85], var[5], i);
		mpfrts_var_t(itd, link[92], var[6], i);
		mpfrts_var_t(itd, link[117], var[7], i);
		mpfrts_var_t(itd, link[124], var[8], i);
		mpfrts_var_t(itd, link[131], var[9], i);
		mpfrts_mul_t_c(itd, "30.000000000000000000000000000000000000000000000000", var[1], link[0], i);
		mpfrts_add_t_c(itd, "2.1000000000000000000000000000000000000000000000000", link[0], link[1], i);
		mpfrts_mul_t(itd, var[3], var[3], link[2], i);
		mpfrts_mul_t(itd, link[2], link[1], link[3], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[3], link[4], i);
		mpfrts_mul_t_c(itd, "-0.00040000000000000000000000000000000000000000000000000", var[1], link[5], i);
		mpfrts_add_t_c(itd, "-0.000025000000000000000000000000000000000000000000000000", link[5], link[6], i);
		mpfrts_mul_t_c(itd, "-1000.0000000000000000000000000000000000000000000000", var[4], link[7], i);
		mpfrts_add_t_c(itd, "-30.000000000000000000000000000000000000000000000000", link[7], link[8], i);
		mpfrts_exp_t(itd, link[8], link[9], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[9], link[10], i);
		mpfrts_inv_t(itd, link[10], link[11], i);
		mpfrts_mul_t_c(itd, "-1000.0000000000000000000000000000000000000000000000", var[7], link[12], i);
		mpfrts_add_t_c(itd, "-30.000000000000000000000000000000000000000000000000", link[12], link[13], i);
		mpfrts_exp_t(itd, link[13], link[14], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[14], link[15], i);
		mpfrts_inv_t(itd, link[15], link[16], i);
		mpfrts_add_t(itd, link[16], link[11], link[17], i);
		mpfrts_mul_t(itd, link[17], link[6], link[18], i);
		mpfrts_mul_t_c(itd, "2.0000000000000000000000000000000000000000000000000", link[18], link[19], i);
		mpfrts_add_t(itd, link[19], link[4], link[20], i);
		mpfrts_mul_t_c(itd, "-16.000000000000000000000000000000000000000000000000", var[1], link[21], i);
		mpfrts_add_t(itd, link[21], link[20], link[22], i);
		mpfrts_mul_t_c(itd, "160.00000000000000000000000000000000000000000000000", var[1], link[23], i);
		mpfrts_add_t_c(itd, "-7.2000000000000000000000000000000000000000000000000", link[23], link[24], i);
		mpfrts_mul_t(itd, var[2], link[24], link[25], i);
		mpfrts_mul_t_c(itd, "-150.00000000000000000000000000000000000000000000000", var[1], link[26], i);
		mpfrts_add_t_c(itd, "-4.5750000000000000000000000000000000000000000000000", link[26], link[27], i);
		mpfrts_exp_t(itd, link[27], link[28], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[28], link[29], i);
		mpfrts_pow_t_c(itd, link[29], "-3.0000000000000000000000000000000000000000000000000", link[30], i);
		mpfrts_mul_t(itd, link[30], link[25], link[31], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[31], link[32], i);
		mpfrts_add_t(itd, link[32], link[22], link[33], i);
		mpfrts_add_t_c(itd, "-0.74800000000000000000000000000000000000000000000000", link[33], link[34], i);
		mpfrts_mul_t_c(itd, "-24.691358024691400000000000000000000000000000000000", var[2], link[35], i);
		mpfrts_mul_t_c(itd, "500.00000000000000000000000000000000000000000000000", var[1], link[36], i);
		mpfrts_add_t_c(itd, "16.250000000000000000000000000000000000000000000000", link[36], link[37], i);
		mpfrts_exp_t(itd, link[37], link[38], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[38], link[39], i);
		mpfrts_div_t_cv(itd, c0, link[39], link[40], i);
		mpfrts_add_t(itd, link[40], link[35], link[41], i);
		mpfrts_mul_t_c(itd, "-1.1111111111111100000000000000000000000000000000000", var[3], link[42], i);
		mpfrts_mul_t_c(itd, "-83.000000000000000000000000000000000000000000000000", var[1], link[43], i);
		mpfrts_add_t_c(itd, "0.078850000000000200000000000000000000000000000000000", link[43], link[44], i);
		mpfrts_exp_t(itd, link[44], link[45], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[45], link[46], i);
		mpfrts_div_t_cv(itd, c1, link[46], link[47], i);
		mpfrts_add_t(itd, link[47], link[42], link[48], i);
		mpfrts_mul_t_c(itd, "30.000000000000000000000000000000000000000000000000", var[4], link[49], i);
		mpfrts_add_t_c(itd, "2.1000000000000000000000000000000000000000000000000", link[49], link[50], i);
		mpfrts_mul_t(itd, var[6], var[6], link[51], i);
		mpfrts_mul_t(itd, link[51], link[50], link[52], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[52], link[53], i);
		mpfrts_mul_t_c(itd, "-0.00040000000000000000000000000000000000000000000000000", var[4], link[54], i);
		mpfrts_add_t_c(itd, "-0.000025000000000000000000000000000000000000000000000000", link[54], link[55], i);
		mpfrts_mul_t_c(itd, "-1000.0000000000000000000000000000000000000000000000", var[1], link[56], i);
		mpfrts_add_t_c(itd, "-30.000000000000000000000000000000000000000000000000", link[56], link[57], i);
		mpfrts_exp_t(itd, link[57], link[58], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[58], link[59], i);
		mpfrts_inv_t(itd, link[59], link[60], i);
		mpfrts_add_t(itd, link[16], link[60], link[61], i);
		mpfrts_mul_t(itd, link[61], link[55], link[62], i);
		mpfrts_mul_t_c(itd, "2.0000000000000000000000000000000000000000000000000", link[62], link[63], i);
		mpfrts_add_t(itd, link[63], link[53], link[64], i);
		mpfrts_mul_t_c(itd, "-16.000000000000000000000000000000000000000000000000", var[4], link[65], i);
		mpfrts_add_t(itd, link[65], link[64], link[66], i);
		mpfrts_mul_t_c(itd, "160.00000000000000000000000000000000000000000000000", var[4], link[67], i);
		mpfrts_add_t_c(itd, "-7.2000000000000000000000000000000000000000000000000", link[67], link[68], i);
		mpfrts_mul_t(itd, var[5], link[68], link[69], i);
		mpfrts_mul_t_c(itd, "-150.00000000000000000000000000000000000000000000000", var[4], link[70], i);
		mpfrts_add_t_c(itd, "-4.5750000000000000000000000000000000000000000000000", link[70], link[71], i);
		mpfrts_exp_t(itd, link[71], link[72], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[72], link[73], i);
		mpfrts_pow_t_c(itd, link[73], "-3.0000000000000000000000000000000000000000000000000", link[74], i);
		mpfrts_mul_t(itd, link[74], link[69], link[75], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[75], link[76], i);
		mpfrts_add_t(itd, link[76], link[66], link[77], i);
		mpfrts_add_t_c(itd, "-0.74800000000000000000000000000000000000000000000000", link[77], link[78], i);
		mpfrts_mul_t_c(itd, "-24.691358024691400000000000000000000000000000000000", var[5], link[79], i);
		mpfrts_mul_t_c(itd, "500.00000000000000000000000000000000000000000000000", var[4], link[80], i);
		mpfrts_add_t_c(itd, "16.250000000000000000000000000000000000000000000000", link[80], link[81], i);
		mpfrts_exp_t(itd, link[81], link[82], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[82], link[83], i);
		mpfrts_div_t_cv(itd, c0, link[83], link[84], i);
		mpfrts_add_t(itd, link[84], link[79], link[85], i);
		mpfrts_mul_t_c(itd, "-1.1111111111111100000000000000000000000000000000000", var[6], link[86], i);
		mpfrts_mul_t_c(itd, "-83.000000000000000000000000000000000000000000000000", var[4], link[87], i);
		mpfrts_add_t_c(itd, "0.078850000000000200000000000000000000000000000000000", link[87], link[88], i);
		mpfrts_exp_t(itd, link[88], link[89], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[89], link[90], i);
		mpfrts_div_t_cv(itd, c1, link[90], link[91], i);
		mpfrts_add_t(itd, link[91], link[86], link[92], i);
		mpfrts_mul_t_c(itd, "30.000000000000000000000000000000000000000000000000", var[7], link[93], i);
		mpfrts_add_t_c(itd, "2.1000000000000000000000000000000000000000000000000", link[93], link[94], i);
		mpfrts_mul_t(itd, var[9], var[9], link[95], i);
		mpfrts_mul_t(itd, link[95], link[94], link[96], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[96], link[97], i);
		mpfrts_mul_t_c(itd, "-0.00040000000000000000000000000000000000000000000000000", var[7], link[98], i);
		mpfrts_add_t_c(itd, "-0.000025000000000000000000000000000000000000000000000000", link[98], link[99], i);
		mpfrts_add_t(itd, link[11], link[60], link[100], i);
		mpfrts_mul_t(itd, link[100], link[99], link[101], i);
		mpfrts_mul_t_c(itd, "2.0000000000000000000000000000000000000000000000000", link[101], link[102], i);
		mpfrts_add_t(itd, link[102], link[97], link[103], i);
		mpfrts_mul_t_c(itd, "-16.000000000000000000000000000000000000000000000000", var[7], link[104], i);
		mpfrts_add_t(itd, link[104], link[103], link[105], i);
		mpfrts_mul_t_c(itd, "160.00000000000000000000000000000000000000000000000", var[7], link[106], i);
		mpfrts_add_t_c(itd, "-7.2000000000000000000000000000000000000000000000000", link[106], link[107], i);
		mpfrts_mul_t(itd, var[8], link[107], link[108], i);
		mpfrts_mul_t_c(itd, "-150.00000000000000000000000000000000000000000000000", var[7], link[109], i);
		mpfrts_add_t_c(itd, "-4.5750000000000000000000000000000000000000000000000", link[109], link[110], i);
		mpfrts_exp_t(itd, link[110], link[111], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[111], link[112], i);
		mpfrts_pow_t_c(itd, link[112], "-3.0000000000000000000000000000000000000000000000000", link[113], i);
		mpfrts_mul_t(itd, link[113], link[108], link[114], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[114], link[115], i);
		mpfrts_add_t(itd, link[115], link[105], link[116], i);
		mpfrts_add_t_c(itd, "-0.74800000000000000000000000000000000000000000000000", link[116], link[117], i);
		mpfrts_mul_t_c(itd, "-24.691358024691400000000000000000000000000000000000", var[8], link[118], i);
		mpfrts_mul_t_c(itd, "500.00000000000000000000000000000000000000000000000", var[7], link[119], i);
		mpfrts_add_t_c(itd, "16.250000000000000000000000000000000000000000000000", link[119], link[120], i);
		mpfrts_exp_t(itd, link[120], link[121], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[121], link[122], i);
		mpfrts_div_t_cv(itd, c0, link[122], link[123], i);
		mpfrts_add_t(itd, link[123], link[118], link[124], i);
		mpfrts_mul_t_c(itd, "-1.1111111111111100000000000000000000000000000000000", var[9], link[125], i);
		mpfrts_mul_t_c(itd, "-83.000000000000000000000000000000000000000000000000", var[7], link[126], i);
		mpfrts_add_t_c(itd, "0.078850000000000200000000000000000000000000000000000", link[126], link[127], i);
		mpfrts_exp_t(itd, link[127], link[128], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[128], link[129], i);
		mpfrts_div_t_cv(itd, c1, link[129], link[130], i);
		mpfrts_add_t(itd, link[130], link[125], link[131], i);

    }
    mpfr_clear (c0);
    mpfr_clear (c1);

    write_mp_solution();
    clear_vpl();
    clear_cts();
    return NUM_COLUMNS;
}
    
