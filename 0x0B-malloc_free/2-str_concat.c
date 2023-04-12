#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concaitnate
 * @s1: 1st string
 * @s2: 2nd string
 * Return: zero
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int x = 0, z = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	x = 0;
	z = 0;

	if (s1)
	{
		while (x < len1)
		{
			s3[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (len1 + len2))
		{
			s3[x] = s2[z];
			x++;
			z++;
		}
	}
	s3[x] = '\0';

	return (s3);
}
