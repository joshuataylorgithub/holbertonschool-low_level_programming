#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @src: src string
 * @dest: dest string
 * @n: string limit
 *
 * Return: (dest)
 **/

char *_strncat(char *dest, const char *src, int n)
{

	char *dest_start = dest;

	while (*dest != '\0')
{
	dest++;
}
	while (n > 0 && *src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
	*dest = '\0';
	return (dest_start);

}

