
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: int c is the variable in the function
 *
 * Return: (0).
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
{
	return (0);
}
}
