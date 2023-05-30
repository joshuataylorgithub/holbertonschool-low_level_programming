#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign - checks for +, -, or '0' (positve, negative, or zero)
 *
 * @n: int n is the name of variable in function
 *
 * Return: Always 0 (Success)
 */


int print_sign(int n)

{

	if (n > 0)
{
	putchar('+');
	return (1);
}
	else if (n == 0)
{	
	putchar('0');
	return (0);
}
	else if (n < 0)
{
	putchar('-');
	return (-1);
}
	return (0);
}

