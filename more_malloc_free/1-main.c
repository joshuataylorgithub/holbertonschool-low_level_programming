#include "main.h"
/**
 * main - checks the code
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: (0)
 */

int main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";
	unsigned int n =  3;

	char *concatenated = string_nconcat(s1, s2, n);

	if (concatenated != NULL)
	{
	printf("Concatenated string: %s\n", concatenated);
	free(concatenated);
	}
	else
	{
	printf("Failed to concatenate strings.'n");
	}
	return (0);
}

