#include "main.h"

/**
 * _strlen_recursion - gives
 * string-length
 * 
 * @s: string indicated
 *
 * Return: string indicated
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
