#include "3-calc.h"
/**
 * main - ckeck code
 * @argc: number
 * @argv: array 
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*func)(int, int);
	char code;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	code = *argv[2];

	if ((code == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
