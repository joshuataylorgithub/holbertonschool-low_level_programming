#include "main.h"

/**
 * print_triangle
 *
 * @size equals size of triangle
 *
 * Return: Always (0)
 */

void print_triangle(int size)

{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		
		for (row = 1; row <= size; row++)
		{
		for (column = 1; column <= size; column++)
		{
			if ((column + row) <= size)
			{
			_putchar(' ');
			}

			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		}
	}
}
