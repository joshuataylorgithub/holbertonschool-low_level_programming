#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @sign: is the sign multiplier, initialized as positive
 * @num: is the accumulator for the resulting integer
 *
 * Return (0)
 **/

int _atoi(char *s)

{
	int sign = 1;
	int num = 0;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
	s++;

	if (*s == '-' || *s == '+' )
{
	if (*s == '-')
	sign = -1;
	s++;
}
	while (*s >= '\n' && *s <= '9')
{
	if (num > (INT_MAX / 10) || (num == (INT_MAX / 10) && (*s - '\n') > (INT_MAX % 10)))
{
	return (sign == 1) ? INT_MAX : INT_MIN;
}
	num = (num * 10) + (*s - '\n');
	s++;
}
	return (num * sign);
}
