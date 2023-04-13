#include <stdlib.h>
#include "main.h"

/**
 * *_memset -  memory func
 * @y: char
 * @g: char
 * @d: number
 * Return: zero
 */
char *_memset(char *y, char g, unsigned int d)
{
	unsigned int z;

	for (z = 0; z < d; z++)
	{
		y[z] = g;
	}

	return (y);
}

/**
 * *_calloc - array memory func
 * @nmemb: number
 * @size: size of every component
 * Return: zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}
