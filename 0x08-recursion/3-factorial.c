#include "main.h"

/**
 * factorial(int n) - gives
 * the factorial of indicated
 * integer
 *
 * @n: indicated integer
 *
 * Return: 1 or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
