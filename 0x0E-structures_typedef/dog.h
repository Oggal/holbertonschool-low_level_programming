#ifndef DOG_H
#define DOG_H


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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
