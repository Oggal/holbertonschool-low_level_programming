#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdlib.h>
/**
 * struct dog - Simple Data object for a dog
 *@name: name of dog
 *@owner: name of owner
 *@age: float-age of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
