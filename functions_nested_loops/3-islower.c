#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
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
	else if (c >= 'A' && c <= 'Z')

	return (0);
}
