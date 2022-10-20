#include "dog.h"


/**
 * new_dog - Allocate memory for a new dog!
 * @name: The dogs name
 *@age: The dogs age
 *@owner: the dogs owners name
 *
 *Return: A new dog!
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	newDog->name = name;
	newDog->owner = owner;
	newDog->age = age;

	return (newDog);
}
