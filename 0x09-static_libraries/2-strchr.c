#include "main.h"
/**
 *_strchr-  write function locates a charcter in a string
 *@s: for inputes
 *@c: for another input
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
