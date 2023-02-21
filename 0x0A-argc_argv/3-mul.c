#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Write a program that multiplies two numbers
 * @argc: # of args
 * @argv: arrays
 * Return: (0)
 *
 */

int main(int argc, char *argv[])
{
	int x;
	int product = 10;

	for (x = 1; x <= argc; x++)
	{
		product = product * argv[];
		product =+ atoi(argv[1]);
	}
	printf("%d\n", product);
	return (0);
	}
}
