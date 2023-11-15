#include "main.h"

#define BUFFER_SIZE 1024

ssize_t copy_file(const char *src_file, const char *dest_file);

/**
* main - Copies the content of a file to another
* @argc: The number of arguments
* @argv: An array of argument strings
* Return: 0 on success, or an error if failed
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (copy_file(argv[1], argv[2]) == -1)
	{
		exit(99);
	}

	return (0);
}

/**
 * copy_file - Copies the content of a file to another file.
 * @src_file: The source file to copy from.
 * @dest_file: The destination file to copy to.
 *
 * Return: The number of bytes copied on success, or -1 on failure.
 */
ssize_t copy_file(const char *src_file, const char *dest_file)
{
	int fd_from, fd_to;
	ssize_t data_read, data_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(src_file, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src_file);
		return (-1);
	}

	fd_to = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
	S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", dest_file);
		close(fd_from);
		return (-1);
	}

	while ((data_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		data_written = write(fd_to, buffer, data_read);
		if (data_written == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", dest_file);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (data_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src_file);
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1)
	{
	dprintf(2, "Error: Can't close fd %d\n", fd_from);
	return (-1);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}

	return (data_read);
}
