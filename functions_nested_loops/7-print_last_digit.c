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

	int abs_n = _abs(n);

{
	_putchar(abs_n % 10 + '0');
	_putchar('\n');
	return (abs_n % 10);
}
}
