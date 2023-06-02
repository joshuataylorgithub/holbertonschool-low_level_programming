
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

	while (s[length] != '\n')
{	
	length++;
}
	for (int i = length -1; i >= 0; i--)
{
	write(1, &s[i], 1);
}
	write(1, "\n", 1);
}
