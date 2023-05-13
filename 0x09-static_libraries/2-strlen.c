#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string
 *
 * Description: This function returns the length of the string
 * without including the null byte ('\0') at the end.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
