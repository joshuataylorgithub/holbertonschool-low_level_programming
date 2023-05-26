#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * (test copy)
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() % (RAND_MAX + 1) - RAND_MAX / 2;

	printf("random number is: %d", n);

	return 0;
}
