#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog profile
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog struct, or null if allocation failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	strcpy(new_dog->owner, owner);

	new_dog_>age = age;

	return (new_dog);
}
