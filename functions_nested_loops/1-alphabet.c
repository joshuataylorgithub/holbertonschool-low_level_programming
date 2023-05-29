#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: void (Success)
 */
/**
 * print_alphabet - prints alphabet followed by a new line
 *
 * Description: This function prints all the letters from 
 * 'a' to 'z' in order, using the function putchar.
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
