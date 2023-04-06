#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: result
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palindrome(s, 0));
}
