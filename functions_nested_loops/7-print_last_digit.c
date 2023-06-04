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


	if (last_digit < 0)
{
	last_digit = -last_digit;
}
	return (last_digit);

}
