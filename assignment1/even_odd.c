#include "stdio.h"

void EvenVsOdd()
{

	int x;
	fflush(stdin);
	printf("enter a number \n");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);

	if(x%2)
	{
		printf("%d is odd",x);
		fflush(stdout);


	}
	else
	{
		printf("%d is even",x);
		fflush(stdout);
	}
	return 0;

}

