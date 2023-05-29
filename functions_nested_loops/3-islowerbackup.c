#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int _islower(int c)

{
	char c = 'a';

	if (c >= 'a' && c <= 'z')
{	
	putchar("%c is a lowercase letter\n", c);
}
	else if (c >= 'A' && c <= 'Z')
{
	putchar("%c is not a lowercase letter\n", c);
}
	return (0);
}
