#include "main.h"
/**
 * _strspn - gets the length of the prefix substring
 *
 * @i: counts iterations for s[] loop
 * @j: counts iterations for accept[] loop
 *
 * Return: (count)
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++);
{
	if (s[i] == accept[j])
{
	count++;
	break;
}
}
	if (accept[j] == '\0')
{
	break;
}
}
	return (count);
}
