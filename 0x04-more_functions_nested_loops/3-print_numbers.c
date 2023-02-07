#include "main.h"
/**
 * print_numbers 0 through 9 followed by a newline
 *
 * Return: Always 0
 */
	void print_numbers(void)
{
		int i;

		for (i = 0; i <= 9; i++)
		{
			putchar(i + '0');
		}
			putchar('\n');

}
