#include "main.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * function copies memory area
 * Return - nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
