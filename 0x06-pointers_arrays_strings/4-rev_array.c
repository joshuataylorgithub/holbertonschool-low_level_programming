#include <string.h>
#include "holberton.h"

/**
 * reverse_array - reverses the array 
 * @n: the size of the array
 * @a: the array to be reversed
 * Return: 0
 */


void reverse_array(int *a, int n)

{

	int  c, i;

	for (i = 0; i < n / 2; i++)

	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
