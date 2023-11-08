#include "calc.h"
#include <stdio.h>

/**
 * get_op_func - function to select the operation
 *
 * @s: the operator
 *
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
	int i;

	while (i < 5)
	{
		if (s && !s[1] && ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

