#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	i = 98;
	j = 42;
	printf("i=%d, j=%d\n", i, j);
	swap_int(&i, &j);
	printf("i=%d, j=%d\n", i, j);
	return (0);
}
