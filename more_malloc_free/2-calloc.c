#include "main.h"
/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 *
 *
 *
 * Return: (ptr)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
}

