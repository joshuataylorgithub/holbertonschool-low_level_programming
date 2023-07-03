#ifndef DOG_H
#define DOG_H
#include <stdio.h>


/**
 * struct dog - typedef representing a dog
 * @owner: name of owner
 * @age: age of dog
 * @name: name of dog
 * Return: none
 */

typedef struct dog
{
	char *owner;
	float age;
	char *name;
} dog_t;

#endif
