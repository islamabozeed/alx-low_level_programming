#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n: the number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
