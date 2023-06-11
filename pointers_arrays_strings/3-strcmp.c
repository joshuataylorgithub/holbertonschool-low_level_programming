#include "main.h"
/**
 * _strcmp - compares (2) strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return (0)
 **/

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
{
	s1++;
	s2++;
}
	return ((const unsigned char*)s1 - (const unsigned char *)s2);
}
