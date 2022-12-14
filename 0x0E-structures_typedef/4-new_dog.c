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
	int nameLen = 0, ownerLen = 0, i;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->age = age;

	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	newDog->name = malloc(nameLen);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(ownerLen);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < nameLen; i++)
	{
		(*newDog).name[i] = name[i];
	}
	for (i = 0; i < ownerLen; i++)
	{
		(*newDog).owner[i] = owner[i];
	}

	return (newDog);
}
