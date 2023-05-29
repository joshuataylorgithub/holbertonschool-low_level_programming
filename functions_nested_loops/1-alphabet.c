#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet - prints alphabet
 * Description: prints alphabet
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
