/** \file dailytemp.h
 * \brief Ficheiro header do código da aula prática 1, 
 * serve para fazer algumas coisas com temperatura
 *
 *
 * \author Bruno Duarte
 * \author Diogo Lapa
 *
 * \date 27-02-2024
 * \bug Não tem bugs, somos uns bichos
 *
 * */

#ifndef __DAILYTEMP_H__
#define __DAILYTEMP_H__

#include <stdio.h>
#include <stdlib.h>

/** \brief Creates the vector to hold the temperatures
*
*We try to create a long int vector with size 100, we also initialize the 
*variables count(0), sum(0), max(MIN_TEMP-1), min(MAX_TEMP+1)
*
* \author Bruno Duarte
* \return return void
* \date 27/02/2024
*/
void dtInit();

/**
* \brief Returns the stats of the temperatures
* 
* Returns the maximin, minumu and average
* 
* 
* \author Bruno
* \param[out] res integer array with size 3
*/

int* dtStat(int* res) ;

/**
* \brief Inserts a new value in the array
* 
* If there is space for a new value and if not reallocates it with current size + 10.
* Also updates sum, min and max if necessary.
* 
* \author Diogo Lapa
* \param[in] value being added to the array.
* \return void
*/
void dtAdd(int value);


#endif


