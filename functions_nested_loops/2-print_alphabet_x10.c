#include <stdio.h>
/**
 * main - Entry point
 *
 * print_alphabet(void) - Prints alphabet followed by a new line
 *
 *
 * Return: (void)
 */

void print_alphabet_x10(void)

{
	char alpha = 'a';
	int iteration = 0;

	while (iteration < 10)
{
		while (alpha <= 'z')
{
		putchar(alpha);
		alpha++;
}

	putchar('\n');
	iteration++;

	alpha = 'a';
}
}
