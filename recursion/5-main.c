#include "main.h"

/**
 * main - checks the code
 *
 *
 *
 * Return: (0)
 */


int main()

{
	int number = 25;
	int result = _sqrt_recursion(number);

	if (result == -1)
	{
	printf("Error: Invalid input (negative number or no natural square root)\n");
	}
	else
	{
	printf("The natural square root of %d is %d\n", number, result);
	}
	return (0);
}
