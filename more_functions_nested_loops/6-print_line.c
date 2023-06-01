#include "main.h"

/**
 * print_line - prints a line using underscore
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');

}
	while (n > 0)
{
	_putchar('_');
	n++;
}

	_putchar('\n');

}
