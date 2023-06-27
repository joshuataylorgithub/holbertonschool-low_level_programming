#include "main.h"
/**
 * _strdup - returns a pointer to a string which is a copy of a string
 * @str: original string
 * Return: (0)
 */

char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
	{
	return (NULL);
	}

	length = strlen(str) + 1;
	duplicate = malloc(length);

	if (duplicate == NULL)
	{
	return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
