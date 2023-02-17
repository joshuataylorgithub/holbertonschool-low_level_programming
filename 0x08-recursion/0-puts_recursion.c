#include "main.h"

/**
 * _puts_recursion - prints
 * a string and a new line
 *
 * @s: - string indicated
 *
 * Return: string indicated
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}


	_putchar(*s);
	_puts_recursion(s + 1);

}

