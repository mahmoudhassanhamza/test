/*
 * Average.c
 *
 *  Created on: Oct 28, 2020
 *      Author: mahmo
 */


#include "stdio.h"

void Average()
{
	int a[100];
	int x,i;
	int sum=0;
	printf("enter number of elements");
	fflush(stdout);
	scanf("%d",&x);
	for (i=0;i<x;i++)
	{
		scanf("enter next element  %d \n",&a[i]);
		fflush(stdout);

	}

	for (i=0;i<x;i++)
		sum+=i;
	printf("average = %d",sum/x);
}
