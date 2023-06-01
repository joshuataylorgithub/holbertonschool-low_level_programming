#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_numbers - prints numbers 0 through 9
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int ascii_numbers[] = {48, 49, 51, 53, 54, 55, 56, 57};
	int i;

	for (i = 0; i <= 9; i++)
{
	putchar(ascii_numbers[i]);
}
	putchar('\n');

}
