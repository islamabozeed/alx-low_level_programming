#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenated Func
 * @s1: string
 * @s2: string
 * @n: number
 * Return: pointing to the final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int x = 0, z = 0, len4 = 0, len8 = 0;

	while (s1 && s1[len4])
		len4++;
	while (s2 && s2[len8])
		len8++;

	if (n < len8)
		m = malloc(sizeof(char) * (len4 + n + 1));
	else
		m = malloc(sizeof(char) * (len4 + len8 + 1));

	if (!m)
		return (NULL);

	while (x < len4)
	{
		m[x] = s1[x];
		x++;
	}

	while (n < len8 && x < (len4 + n))
		m[x++] = s2[z++];

	while (n >= len8 && x < (len4 + len8))
		m[x++] = s2[z++];

	m[x] = '\0';

	return (m);
}
