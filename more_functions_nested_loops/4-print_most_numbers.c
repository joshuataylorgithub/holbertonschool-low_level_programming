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
	char numbers[] = {"01356789"};
	int i;

	for (i = 0; i <= 9; i++)
{
	putchar(numbers[i]);
}
	putchar('\n');

}