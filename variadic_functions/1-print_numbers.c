#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @seperator: the string to be printed between numbers
 * @n: the number of args(numbers) to be passed to the function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));

	if (seperator != NULL && i < n - 1)
	printf("%s", seperator);
	}

	va_end(args);
	printf("\n");
}
