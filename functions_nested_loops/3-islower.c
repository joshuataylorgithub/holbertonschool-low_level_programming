#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int _islower(int c)

{
	int c = 'a';

	if (c >= 'a' && c <= 'z')
{	
	return 1;
}
	else if (c >= 'A' && c <= 'Z')

	return (0);
}
