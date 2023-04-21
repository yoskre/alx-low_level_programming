#include "3-calc.h"

/**
 * get_op_func - select function corresponding to operation asked by the user
 * @s: operator passed as argument to the program
 *
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int i = sizeof(ops) / sizeof(op_t);

	while (i)
	{
		if (*s == *(ops[i - 1].op))
			return (ops[i - 1].f);
		i--;
	}
	return (NULL);
}
