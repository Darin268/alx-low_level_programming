#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry data
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*opr)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opr(a, b));
	return (0);
}
