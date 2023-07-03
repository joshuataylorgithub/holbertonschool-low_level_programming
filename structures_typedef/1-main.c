#include <stdio.h>
#include "dog.h"
#include "dog_struct.h"
/*
 * main - checks the code
 *
 * Return: (0)
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
	printf("Name%s,Age%.2f,Owner%s\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
