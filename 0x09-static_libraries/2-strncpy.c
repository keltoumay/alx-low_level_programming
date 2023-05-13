#include "main.h"

/**
* _strncpy - copy a string
* @dest: destination buffer
* @src: source string
* @n: maximum number of bytes to copy
*
* Return: pointer to destination buffer
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;


j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}


return (dest);
}
