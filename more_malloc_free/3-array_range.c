#include "main.h"
/**
 * array_range - Write a function that creates an array of integers.
 *
 *
 * @min: the smallest element of the array (0)
 * @max: the greatest element of the array
 *
 *
 * Return: (0)
 */

int *array_range(int min, int max)
{
	int *arr = (int *)malloc((max - min + 1) * sizeof(int));
	int i;


	if (min > max)
	{
	return (NULL);
	}
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
	arr[i] = min + i;
	}

	return (arr);
}

