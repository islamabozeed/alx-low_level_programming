#include "main.h"
/**
 *_memcpy- simple_print_buffer - prints buffer in hexa
 *@dest: function copies memory area
 *@src: memory for copy
 *@n: number
 *Return: nothing
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
