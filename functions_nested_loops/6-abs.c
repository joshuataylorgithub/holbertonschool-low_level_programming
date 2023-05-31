#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * _abs - computes absolute value of an integer
 *
 * @num: num is the name of int in function
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

