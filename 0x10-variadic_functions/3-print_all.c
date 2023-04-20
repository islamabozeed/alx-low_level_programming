#include "variadic_functions.h"

/**
 * print_all - print function
 * @format:argument types
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *unique, *seap = "";

	va_list group;

	va_start(group, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seap, va_arg(group, int));
					break;
				case 'i':
					printf("%s%d", seap, va_arg(group, int));
					break;
				case 'f':
					printf("%s%f", seap, va_arg(group, double));
					break;
				case 's':
					unique = va_arg(group, char *);
					if (!unique)
						unique = "(nil)";
					printf("%s%s", seap, unique);
					break;
				default:
					i++;
					continue;
			}

			seap = ", ";
			i++;
		}

	}

	printf("\n");
	va_end(group);
}
