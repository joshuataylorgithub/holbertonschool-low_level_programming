
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

	if (s == NULL)
	return;

	int length = 0;
	while (s[length] != '\0')
{
	length++;
}

	int i = 0;
	int j = length - 1;
	while (i < j)
{
	char temp = s[i];

	s[i] = s[j];
	s[j] = temp;

	i++;
	j--;
}
}
