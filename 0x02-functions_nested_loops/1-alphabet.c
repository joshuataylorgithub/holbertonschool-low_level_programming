#include "main.h"

/**
 * Description: function that prints the alphabet, in lowercase, followed by a new line.
 *
 *
 *
 * Return: void
 **/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	_putchar(alpha);
	}
		putchar('\n');
}
