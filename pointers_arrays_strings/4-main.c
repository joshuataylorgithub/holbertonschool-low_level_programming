#include "main.h"

/**
 * reverse_array - reverses the array
 *
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return (0)
 **/

void reverse_array(int *a, int n)
{
	int i;
	
	i = 0;

	while (i < n)
{
	if (i != 0)
{	
	printf(", ");
}
	printf("%d", a[i]);
	i++;
}
	printf("/n");
}


int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);

}
