#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: the length of the string to concatenate
 *
 *
 * Return: (0)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	size_t result_len = s1_len + n + 1;

	char *result = (char *)malloc(result_len * sizeof(char));
	if (s1 == NULL)


	s1 = "";
	if (s2 == NULL)
	s2 = "";

	if (n >= s2_len)
	n = s2_len;

	if (result == NULL)
	{
	return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}

