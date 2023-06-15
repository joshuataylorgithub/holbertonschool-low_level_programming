#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabet characters
 *
 * @c: int c is the name of variable in function
 *
 * Return: Always 0 (Success)
 */


int _isalpha(int c)

{

	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else if (c >= 'A' && c <= 'z')
{
	return (1);
}
	else
	return (0);
}

