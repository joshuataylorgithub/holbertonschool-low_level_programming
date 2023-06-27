#include "main.h"
/**
 * main - checks the code
 *
 * Return: (0)
 */

int main(void)
{
	char *s;

	s = _strdup("Duplicated");
	if (s == NULL)
	{
	printf("Failed to allocate memory\n");
	return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
