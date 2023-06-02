
#include "main.h"
/**
 * rev_string - write a function that prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: void
 **/

void rev_string(char *s)

{

	int length = 0;
	int i;

	while (s[length] != '\0')
{
	length++;
}

	i = length - 1;

	while (i >= 0)
{
	write(1, &s[i], 1);
	i--;
}
	write(1, "\n", 1);
}
