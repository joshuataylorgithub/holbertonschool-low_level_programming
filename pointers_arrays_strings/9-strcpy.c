#include "main.h"

/**
 * _strcpy - copies char *src to char *dest
 *
 * @src: source to be copied
 * @dest: destination of copy
 *
 *
 * Return: (dest)
 **/

char *_strcpy(char *dest, char *src)

{
	int i = 0;


	while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
	dest[i] = '\0';

	return (dest);
}
