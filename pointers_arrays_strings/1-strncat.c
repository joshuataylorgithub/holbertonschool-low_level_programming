#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @src: src string
 * @dest: dest string
 *
 * Return: (dest)
 **/

char *_strncat(char *dest, char *src, int n)
{

	if (*dest == '\0' && *src == '\0')
{
	return ('\0');
}



	while (*dest != '\0');
{
	dest++;
}
	while (n--)
	if (!(*dest++ = *src++))
{
	return (dest);
}
	*dest = '\0';
	return (dest);

}

