#include "main.h"
#include <stdio.h>

/**
 * main - to print multipliction of two args number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
