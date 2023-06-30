#include "main.h"
/**
 * main - checks the code
 *
 *
 * Return: (0)
 */

int main()
{
	int min = 3;
	int max = 8;
	int i;

	int *arr = array_range(min, max);

	if (arr != NULL)
	{
	for (i = 0; i <= max - min; i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	}
	else
	{
	printf("Failed to create an array./n");
	}
	return (0);
}
