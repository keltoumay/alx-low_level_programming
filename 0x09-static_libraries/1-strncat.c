#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Null terminate the resulting string */
	dest[dest_len + i] = '\0';

	/* Return a pointer to the resulting string */
	return (dest);
}

