#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * only use the putchar function
 * only use putchar three times in your code
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
