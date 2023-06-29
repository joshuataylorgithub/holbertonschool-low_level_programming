#include "main.h"


/**
 * malloc_checked - Write a function that allocates memory using malloc.
 *
 * Return: (ptr)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	fprintf(stderr, "Memory allocation failed.\n");
	exit (98);
	}
	return (ptr);
}
