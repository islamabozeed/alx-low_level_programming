#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: number
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int geld, n, rest;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	geld = atoi(argv[1]);
	rest = 0;

	if (geld < 0)
	{
		printf("0\n");
		return (0);
	}
	for (n = 0; n < 5 && geld >= 0; n++)
	{
		while (geld >= coins[n])
		{
			rest++;
			geld -= coins[n];
		}
	}
	printf("%d\n", rest);
	return (0);
}
