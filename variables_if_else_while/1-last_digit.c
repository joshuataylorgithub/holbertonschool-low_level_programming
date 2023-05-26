#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5);
{
	printf("Last digit of %lli is greater than 5\n", n);
}
	else if (x == 0);
{
	printf("Last digit of %lli is 0\n", n);
}
	else if (x < 6 && != 0);
{	
	printf("Last digit of %lli is less than 6 and not 0\n", n);
}
	return (0);
}

}

