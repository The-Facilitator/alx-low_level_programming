#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *		Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content);
/**
 * append_text_to_file - Appends text to a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *		Otherwise - 1.
 */

int open_file(const char *filename);
/**
 * open_file - Opens a file.
 * @filename: A pointer to the name of the file to open.
 * Return: On success - the file descriptor.
 *		On failure - -1.
 */

ssize_t write_file(int fd, const void *buf, size_t count);
/**
 * write_file - Writes to a file descriptor.
 * @fd: The file descriptor.
 * @buf: A pointer to the buffer containing the data to write.
 * @count: The number of bytes to write.
 * Return: On success - the number of bytes written.
 *		On failure - -1.
 */

int close_file(int fd);
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 * Return: On success - 0.
 *		On failure - -1.
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

