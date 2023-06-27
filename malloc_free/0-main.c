#include "main.h"
/**
 * main - checks the code
 *
 *
 * Returns: (0)
 */

int main()
{
	unsigned int size = 5;
	char c = 'A';
	char *array = create_array(size, c);

	if (array != NULL)
	{
	unsigned int i;
	for (i = 0; i < size; i++)
	{
	printf("%c", array[i]);
	}
	printf("\n");
	free(array);
	}

	return (0);
}
