#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @src: src string
 * @dest: dest string
 *
 * Return: (dest)
 **/

char *strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	
{	
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
}
	dest[dest_len] = '\0';
	return (dest);

}
}
