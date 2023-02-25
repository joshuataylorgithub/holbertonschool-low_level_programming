#include <stdlib.h>
#include <stdio.h>
/**
 * main(int argc, char *argv[]) - writes argv[0]
 *
 * Description: write a program that prints the name
 * of the file it was compiled from,
 * followed by a new line.
 *
 * main - Entry point
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;


	for (i = 1; i < argc; i++)
	{
	printf("%d\n", argc);
	}
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
