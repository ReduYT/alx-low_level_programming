#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog mem
 * @d: points to dog
 */
void free_dog(dog_t *d)
{
	if (d != null)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
