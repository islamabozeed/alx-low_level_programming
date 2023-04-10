#include <stdio.h>
#include <stdlib.h>

/**
 * main- program that multiplies two numbers.
 * @argc: number
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\b");
		return (1);
	}
	return (0);
}
