#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * times_table - prints a times table
 *
 *
 * Return: Always 0 (Success)
 */


void times_table(void)

{
	int i, result;

	for (i = 0; i <= 10; i++)
{
	result = 9 * i;
	printf("9 * %d = %d\n", i, result);
}
}
