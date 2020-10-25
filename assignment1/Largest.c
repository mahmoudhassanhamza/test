/*
 * Largest.c
 *
 *  Created on: Oct 26, 2020
 *      Author: mahmo
 */

#include "stdio.h"

void Largest(){


	float x;
	float temp;
	printf("enter the first number \n");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);


	printf("enter the first number \n");
	fflush(stdout);
	scanf("%f",&temp);
	fflush(stdin);

	if (x>=temp)
		temp = x;

	printf("enter the first number \n");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);

	(x>=temp)? printf("%f",x): printf("%f",temp);

}
