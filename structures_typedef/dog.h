#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
{
	char *owner;
	float age;
	char *name;
}



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
