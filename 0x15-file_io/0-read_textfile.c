#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of teh file
 * @letters: the number of letters should be read
 * Return:  the actual number of letters or 0 if  filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fb, frd, fwr;
	char *buf;

	if (filename == NULL)
		return (0);
	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	frd = read(fb, buf, letters);
	fwr = write(STDOUT_FILENO, buf, frd);
	close(fb);
	free(buf);
	return (fwr);
}
