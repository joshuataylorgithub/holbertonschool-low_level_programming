#include <unistd.h>
#include "main.h"
/**
 * swap_int - function swaps the value of two integers
 *
 * @a: int to be swapped
 * @b: int to be swapped
 *
 * Return: (int *a, int *b)
 *
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
