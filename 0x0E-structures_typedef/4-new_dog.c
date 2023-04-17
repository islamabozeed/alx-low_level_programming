#include "dog.h"
#include <stdlib.h>

/**
 * _strlength - length
 * @s: string
 * Return: zero
 */
int _strlength(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
/**
 * *_copy - create a copy
 * @place: pointer
 * @source: pointer
 * Return: place
 */
char *_copy(char *place, char *source)
{
	int length, count;

	length = 0;
	while (source[length] != '\0')
	{
		length++;
	}
	for (count = 0; count < length; count++)
	{
		place[count] = source[count];
	}
	place[count] = '\0';

	return (place);
}

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: char
 * Return: zero
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length, length1;

	length = _strlength(name);
	length1 = _strlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_copy(dog->name, name);
	_copy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
