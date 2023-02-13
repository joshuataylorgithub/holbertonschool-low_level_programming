#include "holberton.h"


/**
 * string_toupper - puts a lower
 * case letter into uppercase
 * @s1: character to make upper
 * Return: return value of upper
 * Returns all characters from
 * lowercase to uppercase
 */


char *string_toupper(char *s1)

{
	int i;

	for (i = 0; s1[i] != '\0'; i++)

	{
	if (s1[i] >= 97 && s1[i] <= 122)
		{
		s1[i] = s1[i] - 32;
		}
	}
	return (s1);
}
