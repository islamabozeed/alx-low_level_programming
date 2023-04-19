#include "3-calc.h"

/**
 * main - check the code
 * @argc: number
 * @argv: array
 * Return: ZERO
 */
int main(int argc, char *argv[])
{
	int farg, sarg, fs;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	farg = atoi(argv[1]);
	sarg = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];
	if ((o == '/' || o == '%') && sarg == 0)
	{
		printf("Error\n");
		exit(100);
	}
	p = func(farg, sarg);
	printf("%d\n", p);
	return (0);
}
