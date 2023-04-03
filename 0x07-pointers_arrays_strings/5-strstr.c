#include "main.h"
/**
 * functiion locates a substring
 * main - check the code
 * return always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; hatstack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
