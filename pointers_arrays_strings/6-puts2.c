#include "main.h"
/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string
 *
 *
 *
 * Return: void
 *
 **/

void puts2(char *str)


{
	int i = 0;

	if (str == NULL)
{
	printf("null");
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
