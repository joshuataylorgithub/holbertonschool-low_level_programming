#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @owner: name of dog's owner
 * @age: age of dog
 * @name: name of dog
 * @d: represents an instance of the function
 * Return: (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
