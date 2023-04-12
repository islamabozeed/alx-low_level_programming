#include <stdlib.h>
#include "main.h"

/**
 * *create_array -create array
 * @c: char to start the array with c
 * Return: zero
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (i < size)
	{
		*(x + i) = c;
		i++;
	}

	*(x + i) = '\0';

	return (x);
}
