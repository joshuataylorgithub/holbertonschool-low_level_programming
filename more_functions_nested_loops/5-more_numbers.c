#include "main.h"

/**
 * more_numbers - prints numbers 0 through 14 ten times.
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 14; j++)
{
	if (i < 9)
{
	_putchar(i + '0');
}
	_putchar('\n');
}
}
}
