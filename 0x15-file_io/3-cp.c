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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
