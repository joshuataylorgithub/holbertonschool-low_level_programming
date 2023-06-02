
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
	int i = 0;
	int length = 0;
	int j = length - 1;


	if (s == NULL)
	return;

	while (s[length] != '\0')
{
	length++;
}


	while (i < j)
{
	char temp = s[i];
	
	s[i] = s[j];
	s[j] = temp;

	i++;
	j--;
}
}
