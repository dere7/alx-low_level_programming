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
	ssize_t rsize, wsize;

	buffer = malloc(letters);
	if (!filename || !buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rsize = read(fd, buffer, letters);
	if (rsize == -1)
		return (0);
	buffer[rsize] = '\0';
	close(fd);

	wsize = write(STDOUT_FILENO, buffer, letters);
	if (wsize == -1 || wsize != rsize)
		return (0);

	return (rsize);
}
