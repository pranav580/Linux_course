#include<stdio.h>
#include<stdlib.h>

void buggy()
{
	int *intptr;
	intptr = (int*)malloc(sizeof(int));
	*intptr = 100;
	printf("Value at ptr = %d\n",*intptr);
	free(intptr);
	*intptr = 99;
}

void main()
{
	buggy();
}
