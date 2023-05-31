#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int print_sign(int n);

int main(void)
{
	int num = -5;
	int sign = print_sign(num);
	printf("\nSign of %d is %d\n", num, sign);
	return (0);
}
