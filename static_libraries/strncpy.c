#include "main.h"

/**
 * _strncpy - copies char *src to char *dest
 *
 * @src: source to be copied
 * @dest: destination of copy
 * @n: byte limit
 *
 * Return: (dest)
 **/

char *_strncpy(char *dest, const char *src, size_t n)

{
	char *dest_start  = dest;

	while (n > 0 && *src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
	while (n > 0)
{
	*dest = '\0';
	dest++;
	n--;
}
	return (dest_start);
}
