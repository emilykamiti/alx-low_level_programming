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
	int fd, sz;
	char c = (char *) malloc(100, sizeof(char));

	fd = open("my rite code", O_RDONLY);
	if (fd < 0)
	perror("r1"); exit(1);

	sz = read(fd, c, 10);
	printf("read(% d, c, 10). returned %d bytes were read.\n", fd, sz);
	c[sz] = '\0';
	printf("name them: %s\n", c);
}
