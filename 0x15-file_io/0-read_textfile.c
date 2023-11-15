#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Pointer to the file
* @letters: Number of letters it should read and print
* Return: The actual number of letters it could read and print
*	Or 0 if it fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read_text, text_write;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_text = fread(buffer, 1, letters, file);
	if (read_text < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	text_write = write(STDOUT_FILENO, buffer, read_text);
	if (text_write < 0 || text_write != read_text)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (text_write);
}
