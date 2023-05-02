#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: The string to convert.
*
* Return: The integer value of the string.
*/
int _atoi(char *s)
{
int sign = 1, num = 0;
char c;

while (*s)
{
c = *s++;
if (c == '-')
sign *= -1;
else if (c >= '0' && c <= '9')
num = num * 10 + (c - '0');
else if (num > 0)
break;
}

return (num *sign);
}

