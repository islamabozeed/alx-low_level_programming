#include "variadic_functions.h"

/**
 * print_numbers - check code
 * @separator: separat
 * @n: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list group;

	va_start(group, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(group, int));
		else if (separator && i == 0)
			printf("%d", va_arg(group, int));
		else
			printf("%s%d", separator, va_arg(group, int));
	}

	va_end(group);

	printf("\n");
}
