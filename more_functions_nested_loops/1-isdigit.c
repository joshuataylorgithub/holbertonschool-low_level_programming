
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digits
 *
 * @c: int c is the name of variable in function
 *
 * Return: 1 if c is a digit, otherwise returns 0 (Success)
 */


int _isdigit(int c)
{


	if ((c >= '0') && (c <= '9'))
{
	return (1);
}

	return (0);
}

