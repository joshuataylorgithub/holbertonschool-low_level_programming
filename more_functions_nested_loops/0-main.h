#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int main(void)

{
	char c;
	c = 'A';
{	
	printf("%c: %d\n", c, _isupper(c));
}
	c = 'a';
{
	printf("%c: %d\n", c, isupper(c));
}
{
	return (0);
}
}
