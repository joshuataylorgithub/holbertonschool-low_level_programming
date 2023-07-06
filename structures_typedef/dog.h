#ifndef DOG_H
#define DOG_H

struct dog
{
	char *owner;
	float age;
	char *name;
}

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
