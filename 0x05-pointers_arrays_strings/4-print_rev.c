#include "main.h"

/**
* print_rev - prints a string in reverse, followed by a new line.
* @s: the string to be printed in reverse.
*/
void print_rev(char *s)
{
int i, len;

/* calculate the length of the string */
for (len = 0; s[len] != '\0'; len++)
	;
/* print the string in reverse order */
for (i = len - 1; i >= 0; i--)
putchar(s[i]);

/* print a new line character */
putchar('\n');
}
