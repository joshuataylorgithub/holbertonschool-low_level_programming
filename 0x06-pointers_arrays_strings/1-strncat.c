#include "holberton.h"
#include <string.h>

/**
 * _strncat - concats two strings
 *
 * @dest: destination of concatenation
 * @src: source array to concatenate
 * @n: number of values to concatenate
 * Description: concatenates n number
 * of values from source to end of destination
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)

{

/*
 * len1 = length of dest array
 * len2 = length of src array
 */

	int len1, len2;

	len1 = strlen(dest);



	for (len2 = 0 ; len2 < n && src[len2]; len2++)
	{
		dest[len1 + len2] = src[len2];
	}
	dest[len1 + len2] = src[len2];
	return (dest);
}
