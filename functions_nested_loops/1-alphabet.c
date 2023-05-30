#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet
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
