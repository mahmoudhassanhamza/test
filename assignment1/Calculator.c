/*
 * Calculator.c
 *
 *  Created on: Oct 26, 2020
 *      Author: mahmo
 */


#include "stdio.h"

void Calculator()
{
	float x,y;
	char c;
	printf("enter first number \n");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);

	printf("enter second number \n");
	fflush(stdout);
	scanf("%f",&y);
	fflush(stdin);

	printf("enter Operation (+ - * / ) \n");
	fflush(stdout);
	scanf("%c",&c);
	fflush(stdin);

	switch(c)
	{
	case '+':
	{
		printf("%f x+y",x+y);
		return;
	}
	case '-':
	{
		printf("%f ",x-y);
		return;
	}
	case '*':
	{
		printf("%f",x*y);
		return;
	}
	case '/':
	{
		printf("%f",x/y);
		return;
	}

	default:
		printf("enter a proper operation");

	}

}
