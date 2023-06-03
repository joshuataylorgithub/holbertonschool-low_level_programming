#include "main.h"
/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @i: string length
 *
 *
 *
 * Return (void)
 **/

void puts2(char *str)


{
	int i = 0;

	if (str == NULL)
{
	return;
}
	while (str[i] != '\0')
{
	if (i % 2 == 0)
{
	putchar(str[i]);
}
	i++;
}
	putchar('\n');
}
