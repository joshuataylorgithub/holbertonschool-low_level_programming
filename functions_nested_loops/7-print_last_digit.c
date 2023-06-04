#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: is integer being processed
 *
 * Return: Always 0 (Success)
 */


int print_last_digit(int n)

{
	int last_digit = n % 10;
{
	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
}
