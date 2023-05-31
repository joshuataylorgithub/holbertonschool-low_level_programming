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
	int LD;
	LD = n % 10;


	if (n)
{
	return (LD);
}
	else
{
	return (0);
}
}
