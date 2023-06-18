#include "main.h"

/**
 * _sqrt_helper - helper function calculates the square root using binary
 * @n: the number for which the binary search is calculated
 * @start: beginning of search index
 * @end: end of search index
 * Return: (square root of a number if found, -1 if otherwise)
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

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the variable being calculated for square root
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
