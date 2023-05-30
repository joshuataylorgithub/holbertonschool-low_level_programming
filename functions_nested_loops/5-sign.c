#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign - checks for alphabet characters
 *
 * @n: int n is the name of variable in function
 *
 * Return: Always 0 (Success)
 */


int print_sign(int n)

{

	if (n > 0)
{
	printf("+");
}
	return (1);

	else if (n == 0)
{	
	printf(0);
}
	return (0);

	else if (n < 0)
{
	printf("-");
}
	return (-1);

}

