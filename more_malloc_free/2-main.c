#include "main.h"
/**
 * main - checks the code
 *
 *
 * Return: (0)
 */

int main()
{
 	unsigned int nmemb = 5;
	unsigned int size = sizeof(int);
	unsigned int i;

	int *array = (int *)_calloc(nmemb, size);


	if (array != NULL)
	{
	for (i = 0; i < nmemb; i++)
	{
	printf("%d ", array[i]);
	}
	printf("\n");
	free(array);
	}
	else
	{
	printf("Failed to allocate memory.\n");
	}
	return (0);
}
