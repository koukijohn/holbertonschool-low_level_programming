#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * *get_op_func - Contains functions that selects the correct function
 * @s: This is the operator passed as argument to the program.
 *
 * Return: 0
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
	int i =  0;

	while (ops[i].op != NULL) /*op points to the declarations on top*/
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);/*points to f which is our function*/
		}
		i++;
	}
	return (NULL); /*In case nothing matches */
}
