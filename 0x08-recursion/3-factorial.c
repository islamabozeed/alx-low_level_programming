#include "main.h"
/**
 * factorial - the factorial of int
 * @n: the value
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * facorial(n - 1));
}
