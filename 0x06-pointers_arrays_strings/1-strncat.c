#include "holberton.h"
#include <string.h>
/**
 * strncat: concats 2 strings
 *
 * @dest: destination of concatenation
 * @src: source of string to concatenate
 * @n: number of values to concatenate
 * Description: concatenates 'n' number 
 * of values from source to end of destination
 * Return: char value
 */

char *strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
