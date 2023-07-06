#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: searches string 's'
 * @accept: string being compared
 * Return: (s)
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s != '\0')
	{
	while (*a != '\0')
	{
	if (*s == *a)
	{
	return (s);
	}
	a++;
	}
	s++;
	}
	return (NULL);
}

