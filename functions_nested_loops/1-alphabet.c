#include <stdio.h>
/**
 * main - Entry point
 *
 * print_alphabet - Prints alphabet followed by a new line
 *
 * Description: This function prints all the letters from
 * 'a' to 'z' in order, using the function putchar.
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
