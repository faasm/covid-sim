#ifndef COVIDSIM_RAND_H_INCLUDED_
#define COVIDSIM_RAND_H_INCLUDED_

#include <inttypes.h>

typedef double FLOAT;

/* ranf defines */
const int32_t Xm1 = 2147483563;
const int32_t Xm2 = 2147483399;
const int32_t Xa1 = 40014;
const int32_t Xa2 = 40692;
const int32_t Xa1vw = 2082007225;
const int32_t Xa2vw = 784306273;

/* RANDLIB global variables */
extern int **SamplingQueue;
extern int32_t* Xcg1, *Xcg2;
/* RANDLIB functions */
int32_t ignbin(int32_t, FLOAT);
int32_t ignpoi(FLOAT);
int32_t ignbin_mt(int32_t, FLOAT, int);
int32_t ignpoi_mt(FLOAT, int);
FLOAT ranf(void);
FLOAT ranf_mt(int);
void setall(int32_t *, int32_t *);
FLOAT sexpo_mt(int);
FLOAT sexpo(void);
int32_t mltmod(int32_t, int32_t, int32_t);
FLOAT snorm(void);
FLOAT snorm_mt(int);
FLOAT fsign(FLOAT, FLOAT);
//added some new beta, gamma generating functions: ggilani 27/11/14
FLOAT gen_norm_mt(FLOAT, FLOAT, int);
FLOAT gen_gamma_mt(FLOAT, FLOAT, int);
//added some new lognormal sampling functions: ggilani 09/02/17
FLOAT gen_lognormal(FLOAT, FLOAT);
void SampleWithoutReplacement(int, int, int);

#endif // COVIDSIM_RAND_H_INCLUDED_
