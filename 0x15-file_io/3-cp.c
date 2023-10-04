#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: 0 for success and exit codes for failure
 */

int main(int argc, **argv)
{
	int _from = 0, _to = 0;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_from = open(av[1], O_RDONLY);
	if (_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
}
