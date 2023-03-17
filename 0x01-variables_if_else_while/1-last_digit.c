#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -assign a random number to the variable n each time it is executed
*return:0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>5)
	printf("Last digit of d%, is greater than 5\n");
	if (n==0)
	printf("Last digit of d%, is 0\n");
	if (n<6 && n<0)
	printf("Last digit of d%, is less than 6 and not\n");
	return (0);	

		
