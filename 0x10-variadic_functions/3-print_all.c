#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
/* Initialize the variable argument list*/
va_list list;
/* Start iterating over the variable arguments*/
va_start(list, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(list, int)); /* Print a character*/
break;
case 'i':
printf("%s%d", sep, va_arg(list, int)); /* Print an integer*/
break;
case 'f':
printf("%s%f", sep, va_arg(list, double)); /* Print a float*/
break;
case 's':
str = va_arg(list, char *); /** Access a string argument*/
if (!str)
str = "(nil)"; /* Print (nil) if the string is NULL*/
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
