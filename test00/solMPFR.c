
    /****************************************************************************
    This file has been created by Sage for its use with TIDES
    *****************************************************************************/

    #include "mp_tides.h"

    long  function_iteration(iteration_data *itd, mpfr_t t, mpfr_t v[], mpfr_t p[], int ORDER, mpfr_t *cvfd)
    {

    int i;
    int NCONST = 0;
    mpfr_t ct[0];
    
	static int VARIABLES = 3;
	static int PARAMETERS = 0;
	static int LINKS = 34;
	static int   FUNCTIONS        = 0;
	static int   POS_FUNCTIONS[1] = {0};

	initialize_mp_case();


	mpfr_t c0; mpfrts_init (&c0);
	mpfr_t c1; mpfrts_init (&c1);
	mpfrts_set_str(&c0, "24.691358024691400000000000000000000000000000000000");
	mpfrts_set_str(&c1, "1.1111111111111100000000000000000000000000000000000");

	for(i=0;  i<=ORDER; i++) {
		mpfrts_var_t(itd, link[18], var[1], i);
		mpfrts_var_t(itd, link[25], var[2], i);
		mpfrts_var_t(itd, link[32], var[3], i);
		mpfrts_mul_t_c(itd, "30.000000000000000000000000000000000000000000000000", var[1], link[0], i);
		mpfrts_add_t_c(itd, "2.1000000000000000000000000000000000000000000000000", link[0], link[1], i);
		mpfrts_mul_t(itd, var[3], var[3], link[2], i);
		mpfrts_mul_t(itd, link[2], link[1], link[3], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[3], link[4], i);
		mpfrts_mul_t_c(itd, "-16.000000000000000000000000000000000000000000000000", var[1], link[5], i);
		mpfrts_add_t(itd, link[5], link[4], link[6], i);
		mpfrts_mul_t_c(itd, "160.00000000000000000000000000000000000000000000000", var[1], link[7], i);
		mpfrts_add_t_c(itd, "-7.2000000000000000000000000000000000000000000000000", link[7], link[8], i);
		mpfrts_mul_t(itd, var[2], link[8], link[9], i);
		mpfrts_mul_t_c(itd, "-150.00000000000000000000000000000000000000000000000", var[1], link[10], i);
		mpfrts_add_t_c(itd, "-4.5750000000000000000000000000000000000000000000000", link[10], link[11], i);
		mpfrts_exp_t(itd, link[11], link[12], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[12], link[13], i);
		mpfrts_pow_t_c(itd, link[13], "-3.0000000000000000000000000000000000000000000000000", link[14], i);
		mpfrts_mul_t(itd, link[14], link[9], link[15], i);
		mpfrts_mul_t_c(itd, "-2.0000000000000000000000000000000000000000000000000", link[15], link[16], i);
		mpfrts_add_t(itd, link[16], link[6], link[17], i);
		mpfrts_add_t_c(itd, "-0.74800000000000000000000000000000000000000000000000", link[17], link[18], i);
		mpfrts_mul_t_c(itd, "-24.691358024691400000000000000000000000000000000000", var[2], link[19], i);
		mpfrts_mul_t_c(itd, "500.00000000000000000000000000000000000000000000000", var[1], link[20], i);
		mpfrts_add_t_c(itd, "16.250000000000000000000000000000000000000000000000", link[20], link[21], i);
		mpfrts_exp_t(itd, link[21], link[22], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[22], link[23], i);
		mpfrts_div_t_cv(itd, c0, link[23], link[24], i);
		mpfrts_add_t(itd, link[24], link[19], link[25], i);
		mpfrts_mul_t_c(itd, "-1.1111111111111100000000000000000000000000000000000", var[3], link[26], i);
		mpfrts_mul_t_c(itd, "-83.000000000000000000000000000000000000000000000000", var[1], link[27], i);
		mpfrts_add_t_c(itd, "0.078850000000000200000000000000000000000000000000000", link[27], link[28], i);
		mpfrts_exp_t(itd, link[28], link[29], i);
		mpfrts_add_t_c(itd, "1.0000000000000000000000000000000000000000000000000", link[29], link[30], i);
		mpfrts_div_t_cv(itd, c1, link[30], link[31], i);
		mpfrts_add_t(itd, link[31], link[26], link[32], i);

    }
    mpfr_clear (c0);
    mpfr_clear (c1);
    write_mp_solution();
    clear_vpl();
    clear_cts();
    return NUM_COLUMNS;
}
    
