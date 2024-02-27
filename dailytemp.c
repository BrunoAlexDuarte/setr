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

#include <stdlib.h>
#define MAX_TEMP 50
#define MIN_TEMP -50
#define DEF_SIZE 100


static long int* vect;
static long int size;

void dtInit() {
	size = DEF_SIZE;
	count = 0;
	sum = 0;
	max = MIN_TEMP-1;
	min = MAX_TEMP+1;
	vect = (long int*) malloc(size*sizeof(long int));

	if vect == 0 {
		printf("Memory not allocated");
		exit(0);
	return vect;
}


int* dtStat() {
	
	int res[3];
	res[0] = max_temp;
	res[1] = min_temp;
	res[2] = sum / count;
		
	return res;
}


