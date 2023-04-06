#include "main.h"
/**
 * is_prime_number - show prime or not
 * @n: number
 * Return: result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}
