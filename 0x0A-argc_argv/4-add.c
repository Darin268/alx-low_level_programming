#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - to add two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if Error and 0 if nothing is passed
 */

int main(int argc, char *argv[])
{
	int i, j;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);

	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
					return (1);
			}
		}

		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
