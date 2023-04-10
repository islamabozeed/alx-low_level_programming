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
	if (argc == 2)
	{
		int i, lowc = 0, geld = atoi(atgv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (geld >= cents[i])
			{
				lowc += geld / cents[i];
				geld = geld % cents[i];
				if (geld % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lowc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
