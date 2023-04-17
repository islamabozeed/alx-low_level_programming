#include <stdlib.h>
#include "dog.h"
/**
 * _length - length function
 * @s: length
 * Return: 0
 */
int _length(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * _strcp - copy
 * @cp: copy
 * @here: place
 * Return: palce
 */
char *_strcp(char *here, char *cp)
{
	int copy;

	for (copy = 0; cp[copy]; copy++)
		here[coopy] = cp[copy];
	here[copy] = '\0';
	return (here);
}
/**
 * new_dog - creates dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(size(char) * (_length(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(size(char) * (_length(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcp(dog->name, name);
	dog->age = age;
	dog->owner = _strcp(dog->owner, owner);
	return (dog);
}
