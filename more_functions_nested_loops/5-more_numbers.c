#include "main.h"

/**
 * more_numbers - prints numbers 0 through 14 ten times.
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
{
	for (i = 0; i <= 14; i++)
{
	if (i > 9)
{
	_putchar('0' + i / 10);
}
	_putchar('0' + i % 10);
}
	_putchar('\n');
}
}
