#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * jack_bauer - prints a 24 hour clock
 *
 *
 * Return: Always 0 (Success)
 */


void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	for (minute = 0; minute <= 59; minute++)
{
	printf("%02d:%02d\n", hour, minute);
}

}
