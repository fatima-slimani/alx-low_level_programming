#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: ptr to the name of the dog
 * @age: age of dog
 * @owner: ptr to owner of dog
 *
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i, name_length, owner_length;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->age = age;

	// name
	for (name_length = 0; name[name_length]; name_length++)
		;
	name_length++;
	dog->name = malloc(name_length * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];

	// owner
	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	owner_length++;
	dog->owner = malloc(owner_length * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
