#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text to the file
 * @filename: name of file to be appended
 * @text_content: text to be appended
 * Return: on success 1, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(fd, text_content, len);
	}
	return (1);
}
