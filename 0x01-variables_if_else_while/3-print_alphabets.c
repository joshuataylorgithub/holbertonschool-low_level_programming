#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	char letter;
	char Letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (Letter = 'A'; Letter <= 'Z'; Letter++)
		putchar(Letter);

	putchar('\n');

	return (0);
}
