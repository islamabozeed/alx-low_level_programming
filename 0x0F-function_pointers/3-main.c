#include "3-calc.h"
/**
 * main - ckeck code
 * @argc: number
 * @argv: array 
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int argi, argii, p;
	int (*func)(int, int);
	char code;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argi = atoi(argv[1]);
	argii = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	code = *argv[2];

	if ((code == '/' || code == '%') && argii == 0)
	{
		printf("Error\n");
		exit(100);
	}

	p = func(argi, argii);

	printf("%d\n", p);

	return (0);
}
