#include <unistd.h>
#include "main.h"
/**
 * _strlen - finds length of a string
 *
 *
 * @s: char in function
 *
 * Return: len
 *
 **/

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
{
	len++;
	s++;
}
	return (len);
}
