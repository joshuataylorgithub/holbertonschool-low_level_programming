#ifndef DOG_H
#define DOG_H

	struct dog
{
	char *owner;
	float age;
	char *name;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
