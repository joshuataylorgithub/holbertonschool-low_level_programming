#include "function_pointers.h"
#include <stdio.h>

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 * Return: (0), or something else if non-zero
 */

int is_98(int elem)
{
	return (98 == elem);
}

/**
 * is_stric
 *
 *
 */

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * main - checks
 *
 * Return: (0)
 */

int main(void)
int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};

	int index;

	index = int_index(array, 20, is_98);
	printf("");

