#include "main.h"
/**
 * main - check the code
 *
 * Return: (0)
 */

int main(void)
{
	char *s;

	s = _strdup(NULL);
	if (s == NULL)
	{
	printf("Failed to allocate memory\n");
	return (1);
	}
	free(s);
	return (0);
}
