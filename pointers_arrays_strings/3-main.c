#include "main.h"
/**
 * main - checks the code
 *
 *
 *
 * Return (0)
 **/

int main()

{
	char s1[] = "Hello";
	char s2[] = "World!";


	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s2));

	return (0);
}
