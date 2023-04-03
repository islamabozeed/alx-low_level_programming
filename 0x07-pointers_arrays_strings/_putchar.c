#include "main.h"
#include <unistd.h>
/**
 * it use to put char c to stdout
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
