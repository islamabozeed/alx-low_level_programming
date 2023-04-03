#include "main.h"
/**
 * memeset - it refert to fill memory with specific value
 * return: changed array
 */
char *_memeset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
