#include <stddef.h>

/**
 * array_iterator - pointer to a function that prints arrays
 * @array: array to print
 * @size: size of array
 * @action: ptr to a function that takes 'int' parameter and returns void
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (array != NULL && action != NULL)

	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
