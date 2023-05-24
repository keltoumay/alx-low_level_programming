#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/** Declare variables to track indices and lengths of the strings*/
char *s;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

/** Calculate the length of s1*/
while (s1 && s1[len1])
len1++;

/** Calculate the length of s2*/
while (s2 && s2[len2])
len2++;


if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
s = malloc(sizeof(char) * (len1 + len2 + 1));

/** Return NULL if memory allocation fails*/
if (!s)
return (NULL);

/** Copy the characters from s1 to the resulting string*/
while (i < len1)
{
s[i] = s1[i];
i++;
}

while (n < len2 && i < (len1 + n))
s[i++] = s2[j++];

while (n >= len2 && i < (len1 + len2))
s[i++] = s2[j++];


s[i] = '\0';
return (s);
}
