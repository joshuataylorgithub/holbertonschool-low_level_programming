#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: (num * sign)
 **/

int _atoi(char *s)

{
	int sign = 1;
	int num = 0;
	int found = 0;

	while (*s)
{
	if (*s == ' ' || (*s >= 9 && *s <= 13))
	s++;

	if (*s == '-' || *s == '+')
{
	if (*s == '-')
	sign *= -1;
	s++;
}

	if (*s >= '0' && *s <= '9')
{
	found = 1;
	while (*s >= '0' && *s <= '9')
{
	if (num > (INT_MAX / 10) || (num == (INT_MAX / 10)
	&& (*s - '0') > (INT_MAX % 10)))
{
	return ((sign == 1) ? INT_MAX : INT_MIN);
}
	num = (num * 10) + (*s - '0');
	s++;
}
	break;
}
	s++;
}
	return (found ? num * sign : 0);

}

