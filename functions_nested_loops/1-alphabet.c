#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabet
 * Return: Always 0 (Success)
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
