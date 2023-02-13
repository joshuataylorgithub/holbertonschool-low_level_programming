#include "holberton.h"

/**
 * _strncpy - copies a string
 * @src: string to copy from
 * @dest: string to be appended to
 * @n: number of values to copy
 * Description: copies string
 * Return: pointer to destination
 */


char *_strncpy(char *dest, char *src, int n)

{
	int  i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
