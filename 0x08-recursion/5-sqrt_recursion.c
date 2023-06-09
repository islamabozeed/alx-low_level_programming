#include "main.h"
/**
 * _sqrt_recursion - square root
 * _sqrt - helper func
 * @v: helper value
 * @n: the number
 * Return: result
 */
int _sqrt(int n, int v);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *_sqrt - helper func
 *@v: helper value
 *@n: helper value
 *Return: alwayz zero
*/
int _sqrt(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (_sqrt(n, v + 1));
	else
		return (-1);
}
