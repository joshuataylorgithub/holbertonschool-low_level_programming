#include "main.h"
/**
 * print_array - prints specified array
 *
 * @a: integer in function
 * @n: integer in function
 *
 * Return (0)
 **/

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i != n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
