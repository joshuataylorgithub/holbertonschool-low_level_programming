#include "main.h"
/**
 * main - checks the code
 *
 *
 * Returns: (0)
 *
 */

int main(void)
{
	unsigned int size = 10;
	char *c;
	int *i;
	float *f;
	double *d;
	
	d = malloc_checked(size * sizeof(int));
	printf("%p\n", (void *)d);
	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	f = malloc_checked(sizeof(float) * 100000000);
	printf("%p\n", (void *)d);
	free(c);
	free(i);
	free(f);
	free(d);
	return (0);
}
