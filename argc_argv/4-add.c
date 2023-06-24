#include "main.h"
/**
 * main - write a program that adds positive numbers
 *
 * @argc: argument count
 * @argv: argument variable
 *
 * Return (0) or (1) if error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	int num;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
		sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);

}

