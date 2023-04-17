#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the malloc
 * @d: pointer to dog
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
