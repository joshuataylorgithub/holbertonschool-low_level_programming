#include "main.h"
/**
 * main - checks the code
 *
 *
 *
 * Return: (0)
 **/


int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
{
	printf("%s\n", f);
}
	return (0);
}
