#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @a: character type
 * print_alphabet(void) - Prints alphabet followed by a new line
 *
 *
 * Return: (void)
 */

void print_alphabet(void)

{
	char alpha = 'a';

	while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}
	putchar('\n');
}
