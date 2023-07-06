#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the int to print
 * Return: nothing
 */

void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer in hexadecimal
 * @elem: the integer to print
 * Return: nothing
 */

void print_elem_hex(int elem)

{
	printf("0x0%x\n", elem);
}

/**
 * main - checks the code
 * Return (0)
 */

int main(void)

{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
	
