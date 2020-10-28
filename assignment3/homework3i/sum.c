/*
 * sum.c
 *
 *  Created on: Oct 28, 2020
 *      Author: mahmo
 */


#include "stdio.h"
void Sum()
{
	int a[2][2],b[2][2];
	int i,j;
	printf("enter elements of first matrix\n");
	fflush(stdout);
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
		{
			printf("a[%d][%d] = ",i,j);
			fflush(stdout);
			scanf("%d",&a[i][j]);
			fflush(stdin);
		}
	printf("enter elements of second matrix");
	fflush(stdout);
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
		{
			printf("b[%d][%d] = ",i,j);
			fflush(stdout);
			scanf("%d",&b[i][j]);
			fflush(stdin);
		}
	printf("sum matrix: \n %d \t %d \n %d \t %d",a[0][0]+b[0][0],a[0][1]+b[0][1],a[1][0]+b[1][0],a[1][1]+b[1][1]);


}
