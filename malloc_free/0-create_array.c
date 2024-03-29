#include "main.h"
/**
 * create_array - write a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: number of elements in the array to be dynamically allocated
 * @c: represents the character used to initialize each element of the array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}
