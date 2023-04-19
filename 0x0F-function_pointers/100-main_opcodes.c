#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: number
 * @argv: array
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	int i;
	char *arg = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	i = atoi(argv[1]);
	if (i < 0)
		printf("Error\n"), exit(2);
	while (i--)
		printf("%02hhx%s", *arg++, i ? " " : "\n");
	return (0);
}
