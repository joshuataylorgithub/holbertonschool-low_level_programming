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
	int i, j, result;

	for (i = 0; i <= 10; i++)
	for (j = 0; j <= 10; j++)
{
	result = i * j;
	printf("%3d", result);
	if (j < 9)
	printf(",");
}
	printf("\n");
}


