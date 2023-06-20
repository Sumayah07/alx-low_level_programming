#include "main.h"
/**
 * print_alphabet - prints the alphabet with no return value,
 * only use _putchar twice in your code
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
