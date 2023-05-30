#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
{	
	return 1;
}
	else
{
	return (0);
}
}

int main(void)
{
	char ch = 'g';
	int result = _islower(ch);

	if (result)
{
	printf("%c is a lowercase letter.\n", ch);
}
	else
{
	printf("%c is an uppercase letter", ch);
}
	return (0);
}
