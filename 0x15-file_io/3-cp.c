#include "main.h"
/**
 * error_file - check the file
 * @file_from: file cp from
 * @file_to: file cp to
 * @argv: the argument
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n",
				argv[1]);
		exit(98);
	}
	if (!file_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n",
				argv[2]);
		exit(99);
	}
}

/**
 * main - check the file
 * @argc: num of args
 * @argv: args vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int _from, _to, r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	_from = open(argv[1], O_RDONLY);
	_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(_from, _to, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(_from, buf, 1024);
		if (r == -1)
			error_file(-1, 0, argv);
		w = write(_to, buf, r);
		if (w == -1)
			error_file(0, -1, argv);
	}
	return (0);
}
