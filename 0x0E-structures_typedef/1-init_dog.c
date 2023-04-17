#include "dog.h"

/**
 * init_dog - initializes a dog struct
 * @d: ptr to structure
 * @name: ptr to the name of the dog
 * @age: age of dog
 * @owner: ptr to owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
