#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
 * main - check code
 * Desc: function that reads a textfile and prints
 *
 * Return : Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t f_open, f_read, f_write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	f_open = open(filename, O_RDONLY);
	f_write = write(f_open, buf, letters);
	f_read = read(STOUT_FILENO, BUF, f_read);

	if (f_open == -1 || f_read == _1 || f_write == -1 || f_write != f_read)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (f_write);
}
