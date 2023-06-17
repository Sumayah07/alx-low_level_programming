#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * only use the putchar function
 * only use putchar twice in your code
 * Return: always return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
