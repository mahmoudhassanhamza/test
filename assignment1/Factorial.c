/*
 * Factorial.c
 *
 *  Created on: Oct 26, 2020
 *      Author: mahmo
 */


#include "stdio.h"
int Factorial(int x)
{
	if(x==0)
	{
		fflush(stdout);
		return 1;
	}
	return x*Factorial(x-1);


}
