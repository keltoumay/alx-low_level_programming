#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/*Initialize the variable argument list*/
va_list nums;
unsigned int index;
/*Start iterating over the variable arguments*/
va_start(nums, n);

for (index = 0; index < n; index++)
{
/* Print each number*/
printf("%d", va_arg(nums, int));

if (index != (n - 1) && separator != NULL)
/* Print the separator between numbers*/
printf("%s", separator);
}

printf("\n");

va_end(nums);
}
