#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation
 * @s: operator
 * Return: return a pointer to the function
 * that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[5] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
