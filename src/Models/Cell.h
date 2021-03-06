#ifndef COVIDSIM_MODELS_CELL_H_INCLUDED_
#define COVIDSIM_MODELS_CELL_H_INCLUDED_

/**
 * @brief Holds microcells.
 *
 * Keeps track of susceptible, latent and infected people (in addition to details like who
 * is vaccinated, treated etc.) Also contains data for the spatial gravity model for social
 * interactions (probability distributions).
*/
struct Cell
{
	int n; /**< number of people in cell */
	int S, L, I, R, D; /**< S, L, I, R, D are numbers of Susceptible, Latently infected, Infectious, Recovered and Dead people in cell */
	int cumTC, S0, tot_treat, tot_vacc;
	int* members, *susceptible, *latent, *infected; /**< pointers to people in cell. e.g. *susceptible identifies where the final susceptible member of cell is. */
	int* InvCDF;
	float tot_prob, *cum_trans, *max_trans;
	short int CurInterv[MAX_INTERVENTION_TYPES];
};

#endif
