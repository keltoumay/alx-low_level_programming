#include "main.h"

/**
 *  * read_textfile - reads a text file and prints output.
 *   * @filename: name of the file to read.
 *    * @letters: number of letters it should read and print.
 *     *
 *      * Return: number of letters it could read and print
 *       */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fopen);
		return (0);
	}

	fread = read(fopen, buffer, letters);
	if (fread == -1)
	{
		free(buffer);
		close(fopen);
		return (0);
	}

	fwritten = write(STDOUT_FILENO, buffer, fread);
	if (fwritten == -1 || fwritten != fread)
	{
		free(buffer);
		close(fopen);
		return (0);
	}

	free(buffer);
	close(fopen);
	return (fwritten);
}
