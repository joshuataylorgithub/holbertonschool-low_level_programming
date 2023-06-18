#include "main.h"

/**
 * main - verifier le code
 *
 *
 *
 * Return: (0)
 */

int main(void)

{
	int base = 2;
	int exponent = 5;
	int result = _pow_recursion(base, exponent);

	if (result == -1)
	{
	printf("Error: Invalid input (negative exponent)\n");
	}
	else
	{
	printf("%d raised to the power of %d is %d\n", base, exponent, result);
	}
	return (0);
}
