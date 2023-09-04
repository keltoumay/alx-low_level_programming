#include "main.h"

/**
 *  * create_file - Create  file.
 *   * @filename: pointer
 *    * @text_content: pointer
 *     *
 *      * Return: If the function fails -1
 *       */

int create_file(const char *filename, char *text_content)
{
	int fd, wrlen, close_status;
	/* rw-------*/
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (wrlen = 0; text_content[wrlen] != '\0'; wrlen++)
			continue;

		wrlen = write(fd, text_content, wrlen);
		if (wrlen == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}
