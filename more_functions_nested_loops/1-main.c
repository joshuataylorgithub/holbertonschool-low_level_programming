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
	
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit);
	return (0);
}
