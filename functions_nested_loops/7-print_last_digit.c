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
	int last_digit = 0;

	if (n < 0)
	{
		n = (n * -1);
	}
	
	last_digit = (n % 10);
	
	_putchar(last_digit + '0');
	return (last_digit);

}
