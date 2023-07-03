#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * Print all the letters except q and e
 * only use the putchar function
 * only use putchar twice in your code
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
