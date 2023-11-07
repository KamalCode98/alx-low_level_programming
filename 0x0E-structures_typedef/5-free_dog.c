#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  Frees memory associated with a dog structure.
 *
 * @d: A pointer to a 'dog_t' structure.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
