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
	ssize_t _read, _write;

	char *buffer

	if (!filename)

	{
	return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	_read = read(fd, buffer, letters);
	if (_READ == -1)

	{
	free(buffer);
	close(fd);
	return (0);
	}

	_write write(STDOUT_FILE, buffer, read);
	if (_write == -1)

	{
		free(buffer);
		close(fd);
		return (0);
	}

		close(fd);
		return (_read);
}
