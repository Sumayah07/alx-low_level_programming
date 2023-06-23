#include "main.h"
/**
 * print_number - prints an integer
 * @b: integer to be printed
 */
void print_number(int b)
{
	unsigned int b1;

	if (b < 0)
	{
		b1 = -b;
		_putchar('-');
	}
	else
	{
		b1 = b;
	}

	if (b1 / 10)
	{
		print_number(b1 / 10);
	}

	_putchar((b1 % 10) + '0');
}
