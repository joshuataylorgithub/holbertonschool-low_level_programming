#include "main.h"

/**
 * _sqrt_helper - helper function calculates the square root using binary
 * @n: the number for which the binary search is calculated
 * @start: the beginning value of the binary search
 * @end: the ending value of the binary search
 *
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
 * @start: the starting range of the square root search index (0)
 * @end: the end range of the square root search index (n or none)
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
