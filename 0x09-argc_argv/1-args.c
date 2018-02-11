#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program prints number of arguments passed into it.
 * @argc: This is our argument counter.
 * @argv: This is our argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1); /* must not include 1st arg */
	(void) argv;
	return (0);
}
