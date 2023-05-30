#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet
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
