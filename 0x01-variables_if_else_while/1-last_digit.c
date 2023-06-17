#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print entry point
 * assign a random number to the variable n
 * if the last digit of n is greater than 5
 * if the last digit of n is 0
 * if the last digit of n is less than 6 and not 0
 * followed by a new line
 * Return - always return 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit of %d is %d and greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and less than 6\n", n, ld);
	}
	return (0);
}
