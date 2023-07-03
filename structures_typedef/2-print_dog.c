#include <stdio.h>
#include "dog_struct.h"

/**
 * print_dog - prints the content of a struct_dog
 * @d: pointer to the struct_dog to point
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %d\n", (d->owner != NULL) ? d->name : "(nil)");
	}
}
