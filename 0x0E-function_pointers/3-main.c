#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - This contains ourmain function only.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{/*initialiizations*/
	int a;
	int b;
	char *c = argv[2];
	int result;
	int (*john)(int, int);
/*edge cases*/
	if (argc != 4)/*Total amount of argc "./calc 1 + 1"*/
	{
		printf("Error\n");
		exit(98);/*Given*/
	}
	john = get_op_func(argv[2]);
	if (!john || argv[2][1] != '\0') /*This holds all of our operators */
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((b == 0) && (*c == '/' || *c == '%'))
	{
		printf("Error\n");
		exit(100);
	}
/*edge cases close */
	result = john(a, b);
	printf("%d\n", result);
	return (0);
}
