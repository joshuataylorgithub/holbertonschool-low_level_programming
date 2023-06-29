#include "main.h"


/**
 * malloc_checked - Write a function that allocates memory using malloc.
 *
 * Return: (ptr)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	int allocation_failed = 0;

	if (b == 1)
	{
	allocation_failed = 1;
	}
	if (allocation_failed)
	{
	fprintf(stderr, "Memory allocation failed.\n");
	exit (98);
	}

	if (ptr == NULL)
	{
	fprintf(stderr, "Memory allocation failed.\n");
	exit (98);
	}
	return (ptr);
}
