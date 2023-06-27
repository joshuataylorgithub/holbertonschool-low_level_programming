#include "main.h"
/**
 * str_concat - function concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: (0)
 */

char *str_concat(char *s1, char *s2)
{
	size_t length_s1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t length_s2 = (s2 != NULL) ? strlen(s2) : 0;
	size_t length_result = length_s1 + length_s2 + 1;

	char *result = malloc(length_result);

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	if (result == NULL)
	{
	return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
