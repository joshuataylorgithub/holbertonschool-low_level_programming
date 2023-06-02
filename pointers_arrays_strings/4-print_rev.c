
#include "main.h"
/**
 * print_rev - write a function that prints a string in reverse
 *
 *
 *
 * Return: void
 **/

void print_rev(char *s)

{
	int length = 0;
	int i = length -1;

	while (s[length] != '\n')
{	
	length++;
}


	while (i >= 0)
{
	write(1, &s[i], 1);
	i--;
}
	write(1, "\n", 1);
}
