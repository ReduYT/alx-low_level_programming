#include "dog.h"
#include <stdlib.h>

/**
 * new_dog-new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: returns new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(new_dog_ptr);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog_ptr->name = new_name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = new_owner;

	return (new_dog_ptr);
}

