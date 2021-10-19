#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: name of file to be readed
 * @letters: the number of letters it could read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t size;

	buffer = malloc(letters);
	if (!filename || !buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, buffer, letters);
	buffer[size] = '\0';
	close(fd);

	if (write(STDOUT_FILENO, buffer, letters) == -1)
		return (0);

	return (size);
}
