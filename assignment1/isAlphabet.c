/*
 * isAlphabet.c
 *
 *  Created on: Oct 26, 2020
 *      Author: mahmo
 */

#include "stdio.h"

void isAlphabet()
{
	char c;

	printf("enter a character \n");
	fflush(stdout);
	scanf("%c",&c);
	fflush(stdin);
	if( (c>= 65 && c<= 90) ||( c >= 97 && c<= 122) )
		printf("%c is in the alphabet",c);
	else
		printf("%c is not in the alphabet",c);

}
