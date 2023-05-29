#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int _islower(int c);

int main(void)
{
	int c = "a"

	if (_islower(c))
{	
	printf("%c is a lowercase letter\n", c);
}
	else
{
	printf("%c is not a lowercase letter\n", c);
}
	return (0);

	int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
}
