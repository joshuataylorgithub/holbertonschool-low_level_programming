#include "main.h"

char *_strcpy(char *dest, char *src);

/**
 * main - checks the code
 *
 *
 *
 * Return (0)
 **/

int main(void)

{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code.\n");
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}

