#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum
 * @n: number
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int h;
	int s = 0;
	va_list group;

	va_start(group, n);

	for (h = 0; h < n; h++)
		s += va_arg(group, int);

	va_end(group);

	return (s);
}
