#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * _abs - computes absolute value of an integer
 *
 * @c: int c is the name of variable in function
 *
 * Return: Always 0 (Success)
 */


int _abs(int num)

{
	if (num >= 0)
	return (num);

	else
	return (-num);
}

