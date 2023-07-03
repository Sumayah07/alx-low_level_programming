#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * only use the putchar function
 * only use putchar three times in your code
 * Return: Always 0
 */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
