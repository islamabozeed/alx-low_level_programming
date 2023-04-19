#include "3-calc.h"
/**
 * get_op_func - operation function
 * @s: the operator
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int p;

	p = 0;

	while (ops[p].op)
	{
		if (strcmp(ops[p].op, s) == 0)
			return (ops[p].f);
		p++;
	}

	return (NULL);
}
