#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string being searched
 * @c: character being searched for
 *
 * Return: (s or null)
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
	if (*s == c)
{
	return (s);
}
	s++;
}
	if (*s == c)
{
	return (s);
}
	return (NULL);
}
