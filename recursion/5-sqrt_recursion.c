#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: variable being calculated for square root
 * @start: starting range of square root search index (0)
 * @end: end range of square root search index (0 or none)
 * @_sqrt_helper: calculates the square root with binary
 * Return: (square root of a number)
 */

int _sqrt_helper(int n, int start, int end)

{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (start > end)
	{
	return (-1);
	}

	if (square == n)
	{
	return (mid);
	}
	else if (square > n)
	{
	return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
	return (_sqrt_helper(n, mid + 1, end));
	}
}

	int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
