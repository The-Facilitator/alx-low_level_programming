#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 *
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *		Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd = open_file(filename);

	if (fd == -1)

		return (-1);

	if (text_content != NULL)

	{
		ssize_t w = write_file(fd, text_content, strlen(text_content));

		if (w == -1)

		{
			close_file(fd);
			return (-1);
		}
	}

	if (close_file(fd) == -1)
		return (-1);

	return (1);
}
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)

		return (-1);

	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)

		return (-1);

	if (text_content != NULL)

	{
		ssize_t w = write_file(fd, text_content, strlen(text_content));

		if (w == -1)

		{
			close_file(fd);

			return (-1);
		}
	}

	if (close_file(fd) == -1)
	{
		return (-1);
	}

	return (1);
}

int open_file(const char *filename)
	{
		return (open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600));
	}

ssize_t write_file(int fd, const void *buf, size_t count)
	{
		return (write(fd, buf, count));
	}

int close_file(int fd)
	{
		return (close(fd));
	}

