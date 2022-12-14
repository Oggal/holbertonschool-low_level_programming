#include "dog.h"

/**
 *init_dog - Initialize a dog!
 *@d: Target dog to be initialized
 *@name: Name of dog
 *@age: Age of dog
 *@owner:Name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
