#include "holberton.h"

/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: This is a double pointer to a char.
 * @to: This is a pointer to a char.
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
