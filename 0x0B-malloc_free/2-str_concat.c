#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, ci;
/* if either string is NULL, set it to empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = ci = 0;
/* get length of first string */
while (s1[i] != '\0')
i++;
/* get length of second string */
while (s2[ci] != '\0')
ci++;
conct = malloc(sizeof(char) * (i + ci + 1));
/* if memory allocation fails, return null*/
if (conct == NULL)
return (NULL);
i = ci = 0;
/* copy first string to concatenated string */
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}
/* copy second string to concatenated string */
while (s2[ci] != '\0')
{
conct[i] = s2[ci];
i++, ci++;
}
/* add null terminator to concatenated string*/
conct[i] = '\0';
return (conct);
}
