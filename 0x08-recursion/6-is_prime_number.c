#include "main.h"
/**
 * is_prime_number - show prime or not
 * @n: number
 * Return: result
 */
int _helper(int n, int v);
int is_prime_number(int n)
{
	return (_helper(n, 2));
}
/**
 * _helper - for checking prime n
 * @n: number
 * @v number
 * Return: zeroo
 */
int _helper(int n, int v)
{
	if (v >= n && n > 1)
		return (1);
	else if (n % v == 0 || n <= 1)
		return (0);
	else
		return (_helper(n, v + 1));
}
