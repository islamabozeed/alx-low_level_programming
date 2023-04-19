#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function
 * @array: array
 * @size: array size
 * @action: pointer
 * Return: zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
