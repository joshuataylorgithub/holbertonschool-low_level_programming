#include "main.h"
/**
 * array_range - Write a function that creates an array of integers.
 *
 *
 *
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

