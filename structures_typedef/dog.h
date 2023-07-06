#ifndef DOG_H
#define DOG_H

typedef struct dog;
{
	char *owner;
	float age;
	char *name;
}

typedef struct dog_t;
{
	char *owner;
	float age;
	char *name;
}


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner)

#endif
