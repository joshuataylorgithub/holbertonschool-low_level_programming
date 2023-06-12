#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: pointer to an array of integers
 * @n: size of array
 * @i: loop counter
 * @temp: stores array for reversal
 *
 * Return: (void)
 **/

void reverse_array(int *a, int n)
{
	int i, temp;


	for (i = 0; i < n / 2; i++)
{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
}	
}
