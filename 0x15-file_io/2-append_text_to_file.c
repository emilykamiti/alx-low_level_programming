/**
 * Author:Kamiti Emily
 * File name: 2-append_text_to_file.c
 */

#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fd, res_wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND;
		if (fd == -1)
		return (-1);
		len = 0;
		for for (len = 0; text_content[len];)
			len++;
		res_wr = write(fd, text_content, len);
		if (res_wr == -1)
		{
		close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}


