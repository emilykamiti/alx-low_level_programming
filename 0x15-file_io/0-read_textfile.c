#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
 * Desc: function that reads a textfile and prints
 *
 * Return : Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	char c;
	int fd = open("Baby steps", O_RDONLY, O);

	read(fd, &c, 1);
	printf("c = %c/n", c);
	exit(0)
}
