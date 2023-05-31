#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int main(void)

{
	char c;

	for (c >= 'A'; c <= 'Z'; c++)

	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
