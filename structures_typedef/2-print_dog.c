#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the content of a struct_dog
 * @d: pointer to the struct_dog to point
 * @struct dog - dog information
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->name : "(nil)");

}
