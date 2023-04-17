#include "dog.h"
/**
 * init_dog - dog types
 * @d: pointer
 * @name: name
 * @age: age
 * @owner:  owner
 *Return: zero
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
