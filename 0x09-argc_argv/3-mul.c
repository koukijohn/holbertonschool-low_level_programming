#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program multiplies 2 numbers and prints the result.
 * @argc: This is our argument counter.
 * @argv: This is our argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	(void) argc;
	return (0);
}
