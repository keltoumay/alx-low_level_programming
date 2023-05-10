#include "main.h"
/**
 * _print_rev_recursion - Recursively prints a string in reverse.
 * @s: The string to be printed.
 *
 * This function takes a string and prints it in reverse using recursion.
 * It works by first calling itself with the next character in the string,
 * and then printing the current character.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
/* Recursively call the function with the next character in the string */
_print_rev_recursion(s + 1);

/* Print the current character */
_putchar(*s);
}
}
