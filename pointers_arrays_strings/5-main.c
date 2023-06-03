#include "main.h"

void rev_string(char *s);

/**
 * main - checks the code
 *
 *
 *
 * Return (0)
 **/

int main(void)
{
	char str[] = "My school";

	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);
	return (0);
}
