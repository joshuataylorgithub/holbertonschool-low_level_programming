#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * struct dog - specifies the data type
 * @owner: name of dog's owner
 * @age: age of dog
 * @name: name of dog
 * @d: is a ptr to the structure type
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
