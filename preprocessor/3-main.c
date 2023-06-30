#include "3-function_like_macro.h"
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: (0)
 */

int main(void)
{
	int num = -5;
	int absValue = ABS(num);

	printf("Absolute value of %d is %d\n", num, absValue);
	return (0);
}
