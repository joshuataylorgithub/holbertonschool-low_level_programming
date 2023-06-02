#include <unistd.h>
#include "main.h"

void reset_to_98(int *n);

/**
 * main - check the code
 *
 *
 *
 * Return: 0
 *
 **/


int main(void)
{
	int n;
	
	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
