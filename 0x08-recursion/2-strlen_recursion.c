#include "main.h"
/**
 * _strlen_recursion - get the length
 * @s: long of n
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
