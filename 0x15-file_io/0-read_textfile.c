#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - check the code
 * Desc: function that reads a text file and prints it to the POSIX stdout.
 * Return : Always return 0
 * Developer: kamiti Emily
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	res_write = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || rd != wr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (rw);
}
