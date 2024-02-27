/** \file dailytemp.c
 * \brief Ficheiro para colocar o código da aula prática 1, 
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

#include "dailytemp.h"

#define MAX_TEMP 50
#define MIN_TEMP -50
#define DEF_SIZE 100

static long int* vect;
static long int size;
static long int count;
static long int sum;
static long int min_temp;
static long int max_temp;

void dtInit() {
	size = DEF_SIZE;
	count = 0;
	sum = 0;
	max_temp = MIN_TEMP-1;
	min_temp = MAX_TEMP+1;
	vect = (long int*) malloc(size*sizeof(long int));

	if (vect == 0) {
		printf("Memory not allocated");
		exit(0);
	}
}


int* dtStat(int* res) {
	
	res[0] = max_temp;
	res[1] = min_temp;
	res[2] = sum / count;
		
	return res;
}


void dtAdd(int value) {

	if(size == count) {
		vect = (long int*) realloc(vect, size+10);
	}

	if(vect == 0) {
		printf("Memory not reallocated.\n");
		exit(0);
	}

	if(min_temp > value) {
		min_temp = value;
	}
	if(max_temp < value) {
		max_temp = value;
	}

	sum += value;
	vect[count] = value;
	count++;

}

