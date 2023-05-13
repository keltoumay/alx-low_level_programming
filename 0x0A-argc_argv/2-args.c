#include <stdio.h>
#include "main.h"

/**
 * print_args - prints all arguments in the array
 * @args: array of arguments
 * @num_args: number of arguments in the array
 *
 * Return: void
 */
void print_args(char **args, int num_args)
{
int i;

for (i = 0; i < num_args; i++)
{
printf("%s\n", args[i]);
}
}

/**
 * main - entry point, calls print_args function to print arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("Usage: %s [arg1] [arg2] ...\n", argv[0]);
return (1);
}

print_args(argv + 1, argc - 1);

return (0);
}
