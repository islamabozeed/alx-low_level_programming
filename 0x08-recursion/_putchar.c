#include "main.h"
#include <unistd.h>
/**
 * _putchar - for c char in stdout
 * @c: printed char
 * Return: always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
