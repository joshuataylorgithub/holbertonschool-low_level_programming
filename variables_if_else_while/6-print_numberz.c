#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii_numbers[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i;


	for (i = 0; i <= 9; i++)

{
	putchar(ascii_numbers[i]);
	putchar('\n');
}

	return (0);
}
