#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that assigns a random number to a variable
 * Return:0 (Excellent)
 */

int main(void)
{

	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last d);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and 0\n", n, lastd);
	}
	return (0)

}
