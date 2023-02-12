#include "holberton.h"
#include <string.h>

/**
 * _strcat - concatenate two arrays
 *
 * @dest: destination of cocatenation
 * @src: source array to concatenate
 * Description: concatenates (n) number
 * of values from src to end of dest
 * Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + 1] = src[i];
	}

	dest[len1 + len2] = '\0';

	return (dest);
}
