#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase,
 * only use _putchar twice in your code
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
