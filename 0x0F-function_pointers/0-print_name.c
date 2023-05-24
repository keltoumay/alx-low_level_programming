#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to print
 * @f: pointer to function
 *
 * Description: This function takes a string and a pointer to a function
 * that accepts a character pointer. It checks if the name and
 * function pointer are not NULL, and then calls the function
 * pointer, passing the name as an argument.
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
