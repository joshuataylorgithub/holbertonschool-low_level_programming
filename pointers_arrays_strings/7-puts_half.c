#include "main.h"
/**
 * puts_half - prints half the string
 *
 * @str: string
 *
 * Return: (void)
 **/

void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i;

	if (str == NULL)
{
	printf("null");
}
	if (length % 2 == 0)
{
	start_index = length / 2;
}
	else
{
	start_index = (length + 1) / 2;
}
	for (i = start_index; i < length; i++)
{
	putchar(str[i]);
}
	putchar('\n');
}
