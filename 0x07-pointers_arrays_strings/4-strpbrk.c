#include "main.h"
/**
 * function searchs a string ofr any of a set of bytes
 * main - check the code
 * return always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s* == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
