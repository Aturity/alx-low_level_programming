#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-a function that reads a text file
 * and prints it to the POSIX STDOUT.
 * @filename: filename
 * @letters: the number of letters to be read
 * Return: the actual number of letters read and printed
 * or 0 if it fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

