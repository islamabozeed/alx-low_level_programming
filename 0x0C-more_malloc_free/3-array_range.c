#include <stdlib.h>
#include "main.h"

/**
 * *array_range - func
 * @min: minimum
 * @max: maximum
 * Return: zero
 */
int *array_range(int min, int max)
{
	int *m;
	int x, sizo;

	if (min > max)
		return (NULL);

	sizo = max - min + 1;

	m = malloc(sizeof(int) * sizo);

	if (m == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		m[x] = min++;

	return (m);
}
