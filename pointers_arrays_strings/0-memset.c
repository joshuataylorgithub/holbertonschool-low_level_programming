
#include "main.h"
/**
 * memset - fills the memory with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: constant to fill the memory with
 * @n: the number of bytes to fill
 *
 * Return (0)
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
