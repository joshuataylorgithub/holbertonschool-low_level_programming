#include <stdio.h>
#include "struct_dog.h"
#include "dog.h"
/*
 * main - checks the code
 *
 * Return: (0)
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
	printf("My name is %s, I am %.2f, and my owner is %s\n",
		my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
