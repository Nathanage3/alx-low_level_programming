#include "3-calc.h"
/**
 * get_op_func - select the correct function to perform
 * @s: The operator
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[];
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op == *s && s[1] == '\0'))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
