#include "main.h"

char *_strncat(char *dest, char *src, int n);
/**
 * main - checks the code
 *
 *
 *
 * Return (0)
 **/

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	ptr = strncat(s1, s2, 1024);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);

}
