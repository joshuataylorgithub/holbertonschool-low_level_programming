#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - check the codes
 *
 * Return: Always 0.
 */


int main(void)
{
	char c;
	
	for (c = 32; c < 127; c++)
	if (c > '0' || c < '9')
{
	printf("%c: %d\n", c, _isdigit(c));
}
	return (0);
}
