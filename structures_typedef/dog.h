#ifndef DOG_H
#define DOG_H
#include "dog_struct.h"

/**
 * init_dog - initializes the prototype
 * @owner: name of owner
 * @age: age of dog
 * @name: name of dog
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
