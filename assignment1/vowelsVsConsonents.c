#include "stdio.h"

void VowVsCon()
{

	char x;
	printf("enter a character \n");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);

	switch(x){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	{printf("%c is a vowel",x);
	break;}
	default:
		printf("%c is a consonant",x);

	}

}
