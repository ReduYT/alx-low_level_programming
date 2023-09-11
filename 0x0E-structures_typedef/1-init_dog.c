#include "dog.h"

/**
 * init_dog - initializes members of dog
 * @d: pointer to dog
 * @name: dog name to be assigned
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
