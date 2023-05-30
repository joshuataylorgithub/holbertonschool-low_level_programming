#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase alphabet characters
 *
 * @c: int c is the name of variable in function
 *
 * Return: Always 0 (Success)
 */


int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}

