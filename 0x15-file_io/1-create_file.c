#include "main.h"

/**
* create_file - Creates a file
* @filename: The name of file to be created
* @text_content: The string
* Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file1;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}

	file1 = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file1 == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		written = write(file1, text_content, strlen(text_content));
		if (written == -1)
		{
			close(file1);
			return (-1);
		}
	}

	close(file1);

	return (1);
}
