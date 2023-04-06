#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: result
 */

int is_palindrome(char *s);
int _checker(char *s, int st, int nd, int mod);
/**
 *_la - helper func
 *@s: pointer
 *Return: zero
 *
 */
int _la(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _la(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - checking strings
 * @s: pointer
 * Return: zero
 */
int is_palindrome(char *s)
{
	int nd = _la(s);

	return (_checker(s, 0, nd - 1, nd % 2));
}
/**
 * _checker - func for helping
 * @s: pointer
 * @st: value 1
 * @nd: value 2
 * @mod: spacing
 * Return: zero
 */
int _checker(char *s, int st, int nd, int mod)
{
	if ((st == nd && mod != 0) || (st == nd + 1 && mod == 0))
		return (1);
	else if (s[st] != s[nd])
		return (0);
	else
		return (_checker(s, st + 1, nd - 1, mod));
}
