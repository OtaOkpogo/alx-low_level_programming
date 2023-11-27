#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads text file and print to STDOUT.
 * @filename: The text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(fd);
	return (w);
}
