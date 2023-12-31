#include "main.h"
#include <stdlib.h>

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int _from, _to, rd;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_from = open(argv[1], O_RDONLY);
	if (_from  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(_from, buff, BUFSIZ)) > 0)
		if (_to == -1 || (write(_to, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _from);
		exit(100);
	}
	if (close(_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _to);
		exit(100);
	}

	return (0);
}
