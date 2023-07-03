#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @i: integer to swap
 * @n: integer to swap
 */
void swap_int(int *i, int *n)
{
	int a;

	a = *i;
	*i = *n;
	*n = a;
}
