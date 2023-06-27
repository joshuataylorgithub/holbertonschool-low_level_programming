#include "main.h"
/**
 * main - checks the code
 *
 * Return: (0)
 */

int main()
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *concatenated = str_concat(s1,s2);

	if (concatenated != NULL)
	{
	printf("Concatenated string: %s\n", concatenated);

	free(concatenated);
	}

	return (0);
}
