#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
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
