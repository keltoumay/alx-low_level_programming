#include "main.h"

/* Function Declarations */
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of the file.
 *
 * Return: Pointer to the buffer.
 */
char *create_buffer(char *file)
{
char *buf;

buf = malloc(sizeof(char) * 1024);

if (buf == NULL)
{    
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (buf);
}

/**
 * close_file - Closes file descriptor.
 * @fd: File descriptor to be closed.
 */
void close_file(int fd)
{
int ch;

ch = close(fd);

if (ch == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int frm, t, rd, wt;
char *buf;

/* Check for correct number of arguments */
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/* Allocate buffer */
buf = create_buffer(argv[2]);

/* Open source file */
frm = open(argv[1], O_RDONLY);
rd = read(frm, buf, 1024);

/* Open destination file */
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

/* Copy file contents */
do 
{
if (frm == -1 || rd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}

wt = write(t, buf, rd);
if (t == -1 || wt == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}

rd = read(frm, buf, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);

}
while (rd > 0);
/* Cleanup and close files */
free(buf);
close_file(frm);
close_file(t);

return (0);
}
