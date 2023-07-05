#include "stdarg.h"
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	const char *str;
	char c;
	int i;
	float f;
	const char *format_ptr = format;


	va_start(args, format);
	
	while (*format_ptr)
	{
	if (*format_ptr == 'c')
	{
	c = va_arg(args, int);
	printf("%c", c);
	}
	else if (*format_ptr == 'i')
	{
	i = va_arg(args, int);
	printf("%i", i);
	}
	else if (*format_ptr == 'f')
	{
	f = va_arg(args, int);
	printf("%f", f);
	}
	else if (*format_ptr == 's')
	{
	str = va_arg(args, char *);
	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
	}
	format_ptr++;

	if (*format_ptr)
	printf(", ");
	}

	va_end(args);
	printf("\n");

}
