#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - dog
 * @d: struc
 * Return: zero
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
