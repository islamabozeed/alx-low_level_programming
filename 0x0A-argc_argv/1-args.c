#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
