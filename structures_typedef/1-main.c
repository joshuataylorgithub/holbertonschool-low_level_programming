#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);

/*
 * main - checks the code
 *
 * Return: (0)
 */

int main(void)
{

	struct dog my_dog;
	init_dog(&my_dog, "Poppy", 3.5, "Bob");

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.2f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);
	return (0);
}
