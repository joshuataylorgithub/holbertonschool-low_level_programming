#include "holberton.h"
#include <string.h>

/**
 * _strcat - concatenate two arrays
 *
 * @dest: destination of concatenation
 * @src: source array to concatenate
 * Description: concatenates (n) number
 * of values from src to end of dest
 * Return: char value
 */

char *_strcat(char *dest, char *src)

{
	int i;
	int j;


	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[i] != '\0'; i++, j++)
	dest[i] = src[j];
	}

	dest[i] = src[j];

	return (dest);
}
