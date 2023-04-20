#include "variadic_functions.h"

/**
 * print_strings - check code
 * @separator: separating
 * @n: number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *unique;

	va_list group;

	va_start(group, n);

	for (i = 0; i < n; i++)
	{
		unique = va_arg(group, char *);
		if (!unique)
			unique = "(nil)";
		if (!separator)
			printf("%s", unique);
		else if (separator && i == 0)
			printf("%s", unique);
		else
			printf("%s%s", separator, unique);
	}
	printf("\n");
	va_end(group);
}
