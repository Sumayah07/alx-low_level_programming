#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0,
 * only use the putchar function (every other function
 * only use putchar twice in your code
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
