#include "main.h"
/**
 * _strdup - returns a pointer to a string which is a copy of a string
 * @str: original string
 * Return: (0)
 */

char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;
	char *duplicate = malloc(length);

	if (str == NULL)
	{
	return (NULL);
	}

	if (duplicate == NULL)
	{
	return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
