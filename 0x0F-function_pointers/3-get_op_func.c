#include "3-calc.h"

/**
 * get_op_func - selects the func
 * @s: the working
 *
 * Return: pointer
 * NULL if no matches
 */
int (*get_op_func(char *s))(int, int)
{
	int d;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (d < 6)
	{
		if (ops[d].op && *s == ops[d].op[0])
			return (ops[d].f);

		d++;
	}

	return (NULL);
}
