#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to convert.
 *
 * Return: the converted integer, or 0 if no integer is found.
 */
int _atoi(char *s)
{
int sign = 1, i = 0, found_integer = 0;
unsigned int res = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
found_integer = 1;
res = (res * 10) + (s[i] - '0');
}
else if (found_integer)
{
break;
}
i++;
}
res *= sign;
return (res);
}
