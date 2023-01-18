#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - function pointer that selects the correct function
 * 	to perform operation commanded by user
 * @s: the operator given by the user
 * Return: pointer
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
	int j = 0;

	while (ops[j].op)
	{
		if (strcmp(ops[j].op, s) == 0)
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
