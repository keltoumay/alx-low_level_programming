#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wrlen, close_status;
/* rw------- */
mode_t mode = S_IRUSR | S_IWUSR;-

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND, mode);
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
return -1;

return (1);
}
