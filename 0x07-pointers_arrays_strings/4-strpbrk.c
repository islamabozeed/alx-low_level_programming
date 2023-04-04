#include "main.h"
/**
 *_strpbrk - function searchs a string ofr any of a set of bytes
 *@s: main - check the code
 *@accept: input
 *Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
