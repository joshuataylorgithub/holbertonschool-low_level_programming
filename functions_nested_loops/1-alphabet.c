#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet - prints alphabet
 * @void: returns void 
 * Return: void (Success)
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
