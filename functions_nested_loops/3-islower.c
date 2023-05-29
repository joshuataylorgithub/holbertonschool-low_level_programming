#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int _islower(int c);

int main(void)
{
	char c = 'a';

	if (_islower(c))
{	
	putchar("%c is a lowercase letter\n", c);
}
	else if
{
	putchar("%c is not a lowercase letter\n", c);
}
	return (0);

	else (c >= 'a' && c <= 'z')
	return 1;
}
