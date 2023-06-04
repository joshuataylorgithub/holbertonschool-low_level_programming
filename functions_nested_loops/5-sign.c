#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign - checks for +, -, or 0
 *
 * @n: int c is the name of variable in function
 *
 * Return: Always 0 (Success)
 */


int print_sign(int n)
{

	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
{
	_putchar('0');
	return (0);
}
}

