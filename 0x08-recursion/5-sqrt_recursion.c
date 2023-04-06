#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n: the number
 * sqrt - helper func
 * @v: helper value
 * Return: result
 */
int sqrt(int n, int v);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
/*
 * sqrt - helper func
 */
int sqrt(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (sqrt(n, v + 1));
	else
		return (-1);
