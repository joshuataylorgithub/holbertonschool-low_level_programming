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

	return (1);
	putchar('+');
}
	else if (n == 0)
{
	putchar('0');
	return (0);
}
	else
{
	putchar('-');
	return (-1);
}
}

