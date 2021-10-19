#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 1024
/**
 * main - copies content of one file to another
 * @argc: number of args
 * @argv: argument vector
 * Return: 0 on success, any other number on failure
 */
int main(int argc, char const *argv[])
{
	int file_to, file_from;
	char buffer[BUF_SIZE];
	ssize_t size;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	size = read(file_from, buffer, BUF_SIZE);
	buffer[size] = '\0';
	while (size != 0)
	{
		write(file_to, buffer, size);
		size = read(file_from, buffer, BUF_SIZE);
		buffer[size] = '\0';
	}

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);

	return (0);
}
