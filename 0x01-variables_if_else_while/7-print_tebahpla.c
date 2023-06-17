#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * only use the putchar function
 * only use putchar twice in your code
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
