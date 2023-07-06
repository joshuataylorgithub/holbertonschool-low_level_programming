#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints name as is
 * @name: name of person
 * Return: nothing
 */

void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}


/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name of the person
 * Return: void
 */

void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is");
	i = 0;
	
	while (name[i])
	{
	if (name[i] >= 'a' && name[i] <= 'z')
	{
	putchar(name[i] + 'A' - 'a');
	}
	i++;
	}
}

/**
 * main - check the code
 * Return: (0)
 */

int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob", print_name_uppercase);
	printf("/n");
	return (0);
}

