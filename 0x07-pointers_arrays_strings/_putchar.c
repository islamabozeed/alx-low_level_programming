#include "main.h"
#include <unistd.h>
/**
 *_putchar- char c to stdout
 *@c: for printing
 *
 *Return: 1 if success
 *On error: minus 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
