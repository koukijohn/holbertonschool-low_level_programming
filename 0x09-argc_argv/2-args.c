#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program prints all arguments it receives.
 * @argc: This is our argument counter.
 * @argv: This is our argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
