#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digits - func
 * @s: string
 * Return: 0
 */
int is_digits(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlens - lenth function
 * @s: string
 * Return: string length
 */
int _strlens(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - error function
 * Return: nothing
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiple function
 * @argc: number
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digits1, digits2, *results, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digits(s1) || !is_digits(s2))
		errors();
	len1 = _strlens(s1);
	len2 = _strlens(s2);
	len = len1 + len2 + 1;
	results = malloc(sizeof(int) * len);
	if (!results)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		results[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digits1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlens(s2) - 1; len2 >= 0; len2--)
		{
			digits2 = s2[len2] - '0';
			carry += results[len1 + len2 + 1] + (digits1 * digits2);
			results[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			results[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (results[i])
			a = 1;
		if (a)
			_putchar(results[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(results);
	return (0);
}
