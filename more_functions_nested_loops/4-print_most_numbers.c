#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_most_numbers - prints numbers 0 through 9
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
{
	if (i != '2' && i != '4')
{
	putchar('0' + i'\0');
}
}
	putchar('\n');

}
