#include "main.h"
#include <stdio.h>

/**
 * Write a program that adds positive numbers
 * main - Entry point
 * Return: (0)
 */

int main(int argc, char argv[])
{
	if (argc != 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a + b;

	printf("sum of %d plus %d equals %d\n", a, b, sum);
	}
	return (0);
}
