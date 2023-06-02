
#include "main.h"
/**
 * _puts - write a function that prints a string to stdout
 *
 * @str: string to be printed to stdout
 *
 * Return: void
 *
 **/

void _puts(char *str)
{
	while (*str != '\0')
{
	write(1, str, 1);
	str++;
}
	write(1, "\n", 1);
}
