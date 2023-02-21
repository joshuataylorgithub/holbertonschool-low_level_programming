#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * int main(argc, char *argv[])
 * Write a program that prints all arguments it receives.
 * Return: 0
 */

int main(argc, char *argv[])
{

	int i, sum = 0;
	if (argc >= 1)
	{
		for (i = 1; i < argv; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi (argv[i]);
		}
	return (0);
	}
}
